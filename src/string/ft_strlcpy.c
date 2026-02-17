/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:09:08 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:48:28 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/string.h"

// Copies n bytes from src string to dst.
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = 0;
	return (src_len);
}
