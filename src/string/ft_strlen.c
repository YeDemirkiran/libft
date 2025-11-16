/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:59:51 by yademirk          #+#    #+#             */
/*   Updated: 2025/11/16 18:47:53 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_string.h"

// Returns the size of a string.
size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}
