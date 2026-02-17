/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:09:28 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:47:23 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts a lowercase character to uppercase and returns the converted char.
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
