#include "../includes/ft_printf.h"

int	ft_print_int(int num)
{
	char	*number;
	int		i;

	i = 0;
	if (num == 0)
		number = ft_strdup("0");
	else
		number = ft_itoa(num);
	if (!number)
	{
		free (number);
		return (-1);
	}
	i += ft_put_num(number);
	free (number);
	return (i);
}
