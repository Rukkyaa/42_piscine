/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:23:05 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/06 19:51:50 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>
#include <stdlib.h>

void	free_fct2(t_list *list, void (*free_fct)(void *))
{
	free_fct(list->data);
	free(list);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
	void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*current;

	current = *begin_list;
	prev = NULL;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (!prev)
				*begin_list = current->next;
			else
				prev->next = current->next;
			free_fct2(current, free_fct);
			if (!prev)
				current = *begin_list;
			else
				current = prev->next;
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}
