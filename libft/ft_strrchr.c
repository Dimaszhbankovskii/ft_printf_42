#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char	*str;
	char	c;

	str = (char *)(string + ft_strlen(string));
	c = (char) symbol;
	while ((*str != c) && str > string)
		str--;
	if (*str == c)
		return (str);
	else
		return (NULL);
}
