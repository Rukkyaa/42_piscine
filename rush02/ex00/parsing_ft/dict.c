/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:14:22 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 21:20:53 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	dict(t_list *list, char *string)
{
	while (list)
	{
		if (ft_strcmp(list->number, string) == 0)
		{
			ft_putstr(list->word);
			return ;
		}
		list = list->next;
	}
	dict_error();
}
