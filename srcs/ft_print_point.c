#include "../includes/ft_printf.h"

static int	ft_putpoint(char *str)
{
	int	i;

	ft_putstr_fd("0x", 1);
	i = 0;
	while (str[i] && str)
		ft_putchar_fd(str[i++], 1);
	return (i + 2);
}

int	ft_print_point(unsigned long long num)
{
	int		i;
	char	*point;

	i = 0;
	if (num == 0)
		point = ft_strdup("0");
	else
		point = ft_ull_hex_str(num);
	i += ft_putpoint(point);
	free (point);
	return (i);
}
