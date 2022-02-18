#include "../includes/ft_printf.h"

static t_printf	ft_init_t_printf(void)
{
	t_printf	pat;

	pat.type = 0;
	return (pat);
}

static int	ft_parse_str(char *str, va_list args)
{
	t_printf	pat;
	int			count;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[i])
	{
		count = 0;
		if (str[i] != '%')
			count += ft_print_char(str[i]);
		else if (str[i] == '%' && str[i + 1])
		{
			pat = ft_init_t_printf();
			i = ft_make_pat(str, ++i, &pat);
			count += ft_print_type(args, &pat);
		}
		if (count < 0)
			return (-1);
		len += count;
		i++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	char	*str;
	int		len;
	va_list	args;

	len = 0;
	str = ft_strdup(format);
	va_start(args, format);
	len += ft_parse_str(str, args);
	va_end(args);
	free (str);
	return (len);
}
