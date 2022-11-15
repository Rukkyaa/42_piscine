/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:03:01 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/06 21:13:52 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = ft_create_elem(data);
	if (elem)
	{
		if (!(*begin_list))
			*begin_list = elem;
		else
		{
			elem->next = *begin_list;
			*begin_list = elem;
		}
	}
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&list, strs[i]);
		i ++;
	}
	return (list);
}
