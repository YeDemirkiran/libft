/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:08:57 by yademirk          #+#    #+#             */
/*   Updated: 2025/11/16 18:42:34 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_string.h"

// Returns the first instance of char c in a string, NULL if doesn't exist.
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
