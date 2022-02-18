#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)dest;
	while (len--)
	{
		*p++ = c;
	}
	return (dest);
}
