/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:04:47 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/01 19:31:07 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_show_list(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		printf("\nELEMENT : %d\n", i);
		printf("Nombre -> %s\n", list->number);
		printf("Word -> %s\n", list->word);
		printf("Longueur du mot -> %d\n", list->len_word);
		list = list->next;
		i ++;
	}
}
