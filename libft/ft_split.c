#include "libft.h"

static size_t	ft_count_words(char const *str, char chr)
{
	size_t	flag;
	size_t	count;

	flag = 0;
	count = 0;
	while (*str)
	{
		if (*str != chr && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*str == chr)
			flag = 0;
		str++;
	}
	return (count);
}

static char	*ft_make_word(char const *str, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *) malloc(sizeof(*str) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static void	ft_make_arr(char **arr, char const *str, char chr)
{
	size_t	i;
	size_t	k;
	int		index;

	i = 0;
	k = 0;
	index = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != chr && index < 0)
			index = i;
		else if ((str[i] == chr || i == ft_strlen(str)) && index >= 0)
		{
			arr[k++] = ft_make_word(str, index, i);
			index = -1;
		}
		i++;
	}
	arr[k] = NULL;
}

static char	**ft_free_arr(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	num_words;
	size_t	i;

	num_words = ft_count_words(s, c);
	arr = (char **)malloc(sizeof(s) * (ft_count_words(s, c) + 1));
	if (!s || !arr)
		return (NULL);
	ft_make_arr(arr, s, c);
	i = 0;
	while (i < num_words)
	{
		if (arr[i] == NULL)
			return (ft_free_arr(arr, num_words));
		i++;
	}
	return (arr);
}
