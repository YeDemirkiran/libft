/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_string_arr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yademirk <yademirk@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 22:40:02 by yademirk          #+#    #+#             */
/*   Updated: 2025/12/08 22:40:40 by yademirk         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>
#include "libft/linked_list.h"

/**
 * @brief Converts a linked list of strings to a NULL-terminated string array.
 * @param list Pointer to a linked list. Must be not NULL.
 * @note Strings are not duplicated, their address are shared.
 * @warning Don't use it on non-string content.
 */
char	**ft_list_to_string_arr(t_list *list)
{
	size_t	length;
	size_t	i;
	char	**arr;

	if (list == NULL)
		return (NULL);
	length = ft_lstsize(list);
	arr = malloc(sizeof(char *) * (length + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (list)
	{
		arr[i++] = list->content;
		list = list->next;
	}
	arr[i] = NULL;
	return (arr);
}
