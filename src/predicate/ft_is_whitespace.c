/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 18:40:17 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:48:12 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if a character is whitespace (between 9 and 13, or a space).
int	ft_is_whitespace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}
