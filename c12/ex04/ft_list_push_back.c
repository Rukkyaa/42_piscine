/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:29:09 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/06 09:43:38 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

t_list	*ft_list_lastt(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*tmp;

	elem = ft_create_elem(data);
	if (!(*begin_list))
		*begin_list = elem;
	tmp = ft_list_lastt(*begin_list);
	tmp->next = elem;
	elem->next = NULL;
}
