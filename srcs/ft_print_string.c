#include "../includes/ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		i = ft_print_str("(null)");
		return (i);
	}
	while (str[i])
		ft_putchar_fd(str[i++], 1);
	return (i);
}
