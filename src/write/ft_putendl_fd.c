/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:49:41 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:48:42 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/write.h"

// Writes string followed by the newline character (\n) in a file.
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
