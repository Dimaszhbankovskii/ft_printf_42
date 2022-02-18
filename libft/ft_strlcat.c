#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstsize != 0 && dstlen < dstsize - 1)
	{
		while (src[i] != '\0' && dstlen + i < dstsize - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	if (dstlen > dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}
