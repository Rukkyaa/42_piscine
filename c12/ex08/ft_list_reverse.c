/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:52:43 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/06 11:51:09 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*next;

	prev = NULL;
	while (*begin_list)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = prev;
		prev = (*begin_list);
		(*begin_list) = next;
	}
	*begin_list = prev;
}
