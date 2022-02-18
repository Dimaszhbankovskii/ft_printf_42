#include "../includes/ft_printf.h"

static int	ft_is_type(char chr)
{
	if (chr == 'c' || chr == 's' || chr == 'p' || chr == 'd' || \
	chr == 'i' || chr == 'u' || chr == 'x' || chr == 'X' || chr == '%')
		return (1);
	return (0);
}

int	ft_make_pat(char *str, int index, t_printf *pat)
{
	int	i;

	i = index;
	while (str[i])
	{
		if (ft_is_type(str[i]))
		{
			pat->type = str[i];
			break ;
		}
		i++;
	}
	return (i);
}
