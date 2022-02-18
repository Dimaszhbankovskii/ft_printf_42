#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = (void *)malloc(count * size);
	if (arr)
		ft_memset(arr, 0, count * size);
	return (arr);
}
