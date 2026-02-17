/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:07:30 by yademirk          #+#    #+#             */
/*   Updated: 2026/02/17 13:49:02 by yademirk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstdel_node(t_list **lst, t_list *target, void (*del)(void *));
void	ft_lst_replace(t_list **lst, t_list *target,
			t_list *new, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
char	**ft_lst_to_string_arr(t_list *list);

/**
 * @brief Takes a list with char * content, and adds the new node
 * to its correct place.
 *
 * @note
 * This function assumes the given list is already sorted in ascending order.
 * Do NOT use this if the list is not already sorted.
 */
void	ft_lstadd_sorted(t_list **lst, t_list *new);

#endif
