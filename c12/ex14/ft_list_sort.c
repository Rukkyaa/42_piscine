/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:52:36 by axlamber          #+#    #+#             */
/*   Updated: 2022/11/15 13:44:00 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
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
