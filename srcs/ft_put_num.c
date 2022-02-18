#include "../includes/ft_printf.h"

int	ft_put_num(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar_fd(str[i++], 1);
	return (i);
}
