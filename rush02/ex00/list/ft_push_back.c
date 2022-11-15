/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:35:25 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 16:34:47 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_push_back(t_list **begin, t_list *node)
{
	t_list	*tmp;

	if (!(*begin))
		*begin = node;
	else
	{
		tmp = ft_last_node(*begin);
		tmp->next = node;
	}
}
