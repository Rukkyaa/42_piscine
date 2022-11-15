/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:08:16 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/06 19:27:53 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front2(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem(data);
	if (elem)
	{
		if (!*begin_list)
			*begin_list = elem;
		else
		{
			elem->next = *begin_list;
			*begin_list = elem;
		}
	}
}

void	ft_list_sort2(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	void	*temp;

	current = *begin_list;
	if (!*begin_list)
		return ;
	while (current->next)
	{
		if (cmp(current->data, current->next->data) > 0)
		{
			temp = current->data;
			current->data = current->next->data;
			current->next->data = temp;
			current = *begin_list;
		}
		else
			current = current->next;
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	ft_list_push_front2(begin_list, data);
	ft_list_sort2(begin_list, cmp);
}
