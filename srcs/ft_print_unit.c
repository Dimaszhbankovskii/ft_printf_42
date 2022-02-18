#include "../includes/ft_printf.h"

int	ft_print_unit(unsigned int u)
{
	unsigned int	num;
	char			*u_num;
	int				i;

	i = 0;
	num = (unsigned int)(u + 4294967295 + 1);
	if (num == 0)
		u_num = ft_strdup("0");
	else
		u_num = ft_unit_itoa(num);
	if (!u_num)
	{
		free (u_num);
		return (-1);
	}
	i += ft_put_num(u_num);
	free (u_num);
	return (i);
}
