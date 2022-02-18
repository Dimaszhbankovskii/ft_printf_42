#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	char	*str;
	char	c;

	str = (char *) string;
	c = (char) symbol;
	while (*str && *str != c)
		str++;
	if (*str == c)
		return (str);
	else
		return (NULL);
}
