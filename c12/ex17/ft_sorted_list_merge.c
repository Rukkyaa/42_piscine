/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:23:35 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/06 21:22:59 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge2(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	current = *begin_list1;
	if (!*begin_list1)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (current->next)
		current = current->next;
	current->next = begin_list2;
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
	int (*cmp)())
{
	ft_list_merge2(begin_list1, begin_list2);
	ft_list_sort2(begin_list1, cmp);
}
