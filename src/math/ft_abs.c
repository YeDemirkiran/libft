/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:19:24 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:47:45 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the absolute value of an integer.
unsigned int	ft_abs(int n)
{
	unsigned int	un;

	if (n < 0)
		un = (unsigned int)(-(long)(n));
	else
		un = (unsigned int)n;
	return (un);
}
