/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:50:25 by yademirk          #+#    #+#             */
/*   Updated: 2025/06/12 18:08:53 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_rmng;
	size_t	size;

	if (ft_strlen(s) < start)
		str_rmng = 0;
	else
		str_rmng = ft_strlen(s + start);
	size = ft_st_smaller(str_rmng, len) + 1;
	substr = malloc(size * sizeof(*substr));
	if (!substr)
		return (NULL);
	if (size == 1)
		*substr = 0;
	else
		ft_strlcpy(substr, s + start, size);
	return (substr);
}
