#include "../includes/ft_printf.h"

char	*ft_unit_itoa(unsigned int u)
{
	char			*str;
	int				rank;
	unsigned int	n;

	rank = 0;
	n = u;
	while (n)
	{
		n = n / 10;
		rank++;
	}
	str = (char *)malloc(sizeof(char) * (rank + 1));
	if (!str)
		return (NULL);
	str[rank--] = '\0';
	n = u;
	while (n && rank >= 0)
	{
		str[rank--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
