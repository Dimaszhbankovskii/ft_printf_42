#include "../includes/ft_printf.h"

static char	*ft_u_hex_str_part(unsigned int num, char *hex, int rank)
{
	unsigned int	n;

	n = num;
	while (n && rank >= 0)
	{
		if (n % 16 < 10)
			hex[rank--] = n % 16 + '0';
		else
			hex[rank--] = n % 16 + 87;
		n = n / 16;
	}
	return (hex);
}

char	*ft_u_hex_str(unsigned int num)
{
	unsigned int	n;
	int				rank;
	char			*hex;

	n = num;
	rank = 0;
	while (n)
	{
		n = n / 16;
		rank++;
	}
	hex = (char *)malloc(sizeof(char) * (rank + 1));
	if (!hex)
		return (NULL);
	hex[rank--] = '\0';
	hex = ft_u_hex_str_part(num, hex, rank);
	return (hex);
}
