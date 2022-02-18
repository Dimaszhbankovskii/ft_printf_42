#include "libft.h"

static char	*ft_make_str(int n, int sign, long int del, char *str)
{
	int	i;

	i = 0;
	if (sign == 1)
		str[i++] = '-';
	while (del != 1)
	{
		str[i++] = -(n % del / (del / 10)) + '0';
		del /= 10;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	del;
	int			i;
	int			sign;

	sign = 0;
	if (n >= 0)
		n = -n;
	else
		sign = 1;
	del = 10;
	i = 1;
	while (n / del)
	{
		i++;
		del *= 10;
	}
	str = malloc(sizeof(char) * (sign + i + 1));
	if (!str)
		return (NULL);
	return (ft_make_str(n, sign, del, str));
}
