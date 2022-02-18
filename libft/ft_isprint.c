#include "libft.h"

int	ft_isprint(int character)
{
	return (character >= 0x20 && character <= 0x7E);
}
