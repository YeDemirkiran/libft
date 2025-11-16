/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:48:44 by yademirk          #+#    #+#             */
/*   Updated: 2025/11/16 18:18:52 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_converter.h"

// Converts an integer to an ASCII string.
char	*ft_itoa(int n)
{
	unsigned int	un;
	char			*str;
	size_t			digits;
	int				negative;

	digits = ft_intlen(n);
	str = malloc((digits + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[digits--] = 0;
	negative = 0;
	if (n < 0)
		negative = 1;
	un = ft_abs(n);
	while (digits > 0)
	{
		str[digits--] = (un % 10) + 48;
		un /= 10;
	}
	if (negative)
		str[0] = '-';
	else
		str[0] = (un % 10) + 48;
	return (str);
}
