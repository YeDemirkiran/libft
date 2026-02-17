/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:53:28 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:48:38 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Returns the word count in a string separated by char c.
size_t	ft_word_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	if (s == NULL)
		return (0);
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}
