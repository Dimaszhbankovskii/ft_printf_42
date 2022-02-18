#include "libft.h"

void	*ft_memchr(const void *src, int chr, size_t n)
{
	unsigned char	*s;
	unsigned char	c;

	s = (unsigned char *) src;
	c = (unsigned char) chr;
	while (n--)
	{
		if (*s == c)
			return ((void *)s);
		s++;
	}
	return (0);
}
