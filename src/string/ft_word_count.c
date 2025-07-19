#include "libft_string.h"

size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (i && ((s[i] == c && s[i - 1] != c)
				|| (s[i] != c && !s[i + 1])))
			count++;
		i++;
	}
	return (count);
}