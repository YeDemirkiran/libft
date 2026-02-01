/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_to_sorted_place.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:58:15 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/01 17:02:06 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft/linked_list.h"

// Needed only here, unoptimized and messy but whatever
static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/**
 * @brief Takes a list with char * content, and adds the new node
 * to its correct place.
 *
 * @note
 * This function assumes the given list is already sorted in ascending order.
 * Do NOT use this if the list is not already sorted.
 */
void	ft_lstadd_sorted(t_list **lst, t_list *new)
{
	t_list	*current;
	t_list	*pre;
	char	*str_current;
	char	*str_new;

	if (lst == NULL || new == NULL || new->content == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	str_new = (char *)(new->content);
	current = *lst;
	pre = NULL;
	while (current != NULL)
	{
		str_current = (char *)(current->content);
		if (ft_strcmp(str_current, str_new) >= 0)
		{
			if (pre == NULL)
				ft_lstadd_front(lst, new);
			else
			{
				pre->next = new;
				new->next = current;
			}
			return ;
		}
		pre = current;
		current = current->next;
	}
	pre->next = new;
}
