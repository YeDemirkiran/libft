/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 11:59:40 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:47:58 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/memory.h"

// Same as Unix bzero. Overwrites a memory block of size n with zeroes.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
