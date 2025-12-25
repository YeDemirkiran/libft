/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 22:31:23 by yademirk          #+#    #+#             */
/*   Updated: 2025/12/25 22:41:50 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include "libft/linked_list.h"

// Deletes a node of a linked list using the del function at the given index.
void	ft_lstdel_index(t_list **lst, size_t index, void (*del)(void *))
{
	size_t	i;
	t_list	*pre;
	t_list	*node;

	if (lst == NULL || *lst == NULL)
		return ;
	i = 0;
	pre = NULL;
	node = *lst;
	while (node != NULL)
	{
		if (i == index)
		{
			if (pre != NULL)
				pre->next = node->next;
			else
				*lst = node->next;
			ft_lstdelone(node, del);
			return ;
		}
		i++;
		pre = node;
		node = node->next;
	}
}
