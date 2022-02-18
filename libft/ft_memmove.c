#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!src && !dst)
		return (NULL);
	if (dst < src)
	{
		s = (unsigned char *)src;
		d = (unsigned char *)dst;
		while (n--)
			*d++ = *s++;
	}
	else
	{
		s = (unsigned char *)src + n;
		d = (unsigned char *)dst + n;
		while (n--)
			*--d = *--s;
	}
	return (dst);
}
