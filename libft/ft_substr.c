#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) - (size_t)start < len)
		len = ft_strlen(s) - (size_t)start;
	if ((size_t)start > ft_strlen(s))
		len = 0;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	if (len == 0)
		*str = '\0';
	else
		str = ft_strncpy(str, s + start, len + 1);
	return (str);
}
