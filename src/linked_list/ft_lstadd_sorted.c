/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:58:15 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:47:33 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/linked_list.h"

static int	initial_check(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL || new->content == NULL)
		return (0);
	if (*lst == NULL)
	{
		*lst = new;
		return (0);
	}
	return (1);
}

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

static void	add_current_to_list(t_list **lst, t_list *current,
	t_list *pre, t_list *new)
{
	if (pre == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		pre->next = new;
		new->next = current;
	}
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

	if (initial_check(lst, new) == 0)
		return ;
	str_new = (char *)(new->content);
	current = *lst;
	pre = NULL;
	while (current != NULL)
	{
		str_current = (char *)(current->content);
		if (ft_strcmp(str_current, str_new) >= 0)
		{
			add_current_to_list(lst, current, pre, new);
			return ;
		}
		pre = current;
		current = current->next;
	}
	pre->next = new;
}
