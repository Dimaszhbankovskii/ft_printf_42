#include "../includes/ft_printf.h"

int	ft_print_type(va_list args, t_printf *pat)
{
	int	count;

	count = 0;
	if (pat->type == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (pat->type == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (pat->type == 'p')
		count += ft_print_point(va_arg(args, unsigned long long));
	else if (pat->type == 'd' || pat->type == 'i')
		count += ft_print_int(va_arg(args, int));
	else if (pat->type == 'u')
		count += ft_print_unit(va_arg(args, unsigned int));
	else if (pat->type == 'x' || pat->type == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), pat);
	else if (pat->type == '%')
		count += ft_print_char('%');
	return (count);
}
