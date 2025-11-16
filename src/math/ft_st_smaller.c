/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_st_smaller.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:20:02 by yademirk          #+#    #+#             */
/*   Updated: 2025/11/16 19:20:10 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>

// Returns the smaller size_t out of two.
size_t	ft_st_smaller(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}
