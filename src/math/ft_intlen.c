/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:19:37 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:47:46 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/math.h"

// Returns the number of digits in an integer.
size_t	ft_intlen(int n)
{
	unsigned int	un;
	size_t			len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len = 1;
	un = ft_abs(n);
	while (un > 0)
	{
		un /= 10;
		len++;
	}
	return (len);
}
