#include "../includes/ft_printf.h"

char	*ft_ull_hex_str(unsigned long long num)
{
	unsigned long long	n;
	int					rank;
	char				*hex;

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
