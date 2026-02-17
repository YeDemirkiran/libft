/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 22:31:23 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:47:35 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/linked_list.h"

// Deletes a node of a linked list using the del function.
void	ft_lstdel_node(t_list **lst, t_list *target, void (*del)(void *))
{
	t_list	*pre;
	t_list	*node;

	if (lst == NULL || *lst == NULL || target == NULL)
		return ;
	pre = NULL;
	node = *lst;
	while (node != NULL)
	{
		if (node == target)
		{
			if (pre != NULL)
				pre->next = node->next;
			else
				*lst = node->next;
			ft_lstdelone(node, del);
			return ;
		}
		pre = node;
		node = node->next;
	}
}
