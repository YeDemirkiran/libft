/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:49:03 by yademirk          #+#    #+#             */
/*   Updated: 2025/11/16 18:20:26 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft_linked_list.h"

// Deletes a node of a linked list using the del function.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
