#include "../includes/ft_printf.h"

static void	ft_str_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

int	ft_print_hex(unsigned int h, t_printf *pat)
{
	char			*hex;
	int				i;
	unsigned int	num;

	num = h + 4294967295 + 1;
	i = 0;
	if (num == 0)
		hex = ft_strdup("0");
	else
		hex = ft_u_hex_str(num);
	if (!hex)
	{
		free (hex);
		return (-1);
	}
	if (pat->type == 'X')
		ft_str_toupper(hex);
	i += ft_put_num(hex);
	free (hex);
	return (i);
}
