/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:09:01 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:48:24 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/string.h"

// Duplicates a string and returns the memory address of the copy.
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s) + 1;
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, len);
	return (str);
}
