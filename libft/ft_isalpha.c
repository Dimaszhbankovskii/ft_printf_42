#include "libft.h"

int	ft_isalpha(int character)
{
	if ((character >= 'A' && character <= 'Z') || \
	(character >= 'a' && character <= 'z'))
		return (1);
	else
		return (0);
}
