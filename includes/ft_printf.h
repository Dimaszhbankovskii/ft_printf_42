#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct s_printf
{
	int	type;
}				t_printf;

int		ft_printf(const char *format, ...);
int		ft_make_pat(char *str, int index, t_printf *pat);
int		ft_print_type(va_list args, t_printf *pat);
int		ft_print_char(char chr);
int		ft_print_str(char *str);
int		ft_print_point(unsigned long long num);
char	*ft_ull_hex_str(unsigned long long num);
int		ft_print_int(int num);
int		ft_print_unit(unsigned int u);
char	*ft_unit_itoa(unsigned int u);
int		ft_print_hex(unsigned int h, t_printf *pat);
char	*ft_u_hex_str(unsigned int num);
int		ft_put_num(char const *str);
#endif