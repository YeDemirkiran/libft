/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:49:56 by yademirk          #+#    #+#             */
/*   Updated: 2025/12/23 14:46:03 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include "libft/string.h"

static void	*clear_alloc(char **s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		free(s[i++]);
	free(s);
	return (NULL);
}

static char	*get_word(char const **s, char c)
{
	size_t	len;
	char	*str;

	len = 0;
	while ((*s)[len] != '\0' && (*s)[len] != c)
		len++;
	str = ft_substr(*s, 0, len);
	if (str == NULL)
		return (NULL);
	*s += len;
	return (str);
}

// Splits a string by delimiter char c and returns an array of strings.
char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	j;

	if (s == NULL)
		return (NULL);
	str_arr = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (str_arr == NULL)
		return (NULL);
	j = 0;
	while (s != NULL && *s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		str_arr[j] = get_word(&s, c);
		if (str_arr[j] == NULL)
			return (clear_alloc(str_arr, j));
		j++;
	}
	str_arr[j] = NULL;
	return (str_arr);
}
