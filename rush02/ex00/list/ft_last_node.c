/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:30:13 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/01 19:20:51 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_list	*ft_last_node(t_list *begin)
{
	t_list	*tmp;

	tmp = begin;
	if (!tmp)
		return (begin);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
