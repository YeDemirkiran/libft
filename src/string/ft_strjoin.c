/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:50:06 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:48:26 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/string.h"

// Joins two strings and returns the memory address of the copy.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(len * sizeof(*str));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, len);
	return (str);
}
