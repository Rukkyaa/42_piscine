/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:57:52 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/06 21:22:18 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size2(t_list *begin_list)
{
	int	index;

	index = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		index ++;
	}
	return (index);
}

t_list	*ft_list_at2(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (begin_list && i < nbr)
	{
		begin_list = begin_list->next;
		i ++;
	}
	return (begin_list);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		len;
	int		i;
	void	*content;
	t_list	*end;

	i = 0;
	len = ft_list_size2(begin_list);
	while (i < len / 2)
	{
		end = ft_list_at2(begin_list, len - i - 1);
		content = begin_list->data;
		begin_list->data = end->data;
		end->data = content;
		begin_list = begin_list->next;
		i ++;
	}
}
