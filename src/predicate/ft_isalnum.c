/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:23:09 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:48:13 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/predicate.h"

// Checks if a char is alphanumeric.
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
