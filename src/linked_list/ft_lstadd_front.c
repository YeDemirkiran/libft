/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:48:54 by yademirk          #+#    #+#             */
/*   Updated: 2025/11/16 18:19:45 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_linked_list.h"

// Adds a node to the front of a linked list.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	if (*lst)
		new->next = *lst;
	else
		*lst = new;
	*lst = new;
}
