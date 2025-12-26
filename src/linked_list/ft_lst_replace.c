/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:24:14 by yademirk          #+#    #+#             */
/*   Updated: 2025/12/26 18:37:27 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft/linked_list.h"

/**
 * @brief Takes a list, and replaces the target node with a new node/list.
 * @note If target and new is the same, or target is not in the list,
 * nothing happens.
 * @note The target parameter can be a single node or a whole list: It is
 * safely connected to the replaces node's next item.
 */
void	ft_lst_replace(t_list **lst, t_list *target,
	t_list *new, void (*del)(void *))
{
	t_list	*pre;
	t_list	*node;

	if (lst == NULL || *lst == NULL || target == NULL || new == NULL)
		return ;
	if (target == new)
		return ;
	pre = NULL;
	node = *lst;
	while (node != NULL)
	{
		if (node == target)
		{
			if (pre != NULL)
				pre->next = new;
			else
				*lst = new;
			ft_lstlast(new)->next = node->next;
			ft_lstdelone(node, del);
			return ;
		}
		pre = node;
		node = node->next;
	}
}
