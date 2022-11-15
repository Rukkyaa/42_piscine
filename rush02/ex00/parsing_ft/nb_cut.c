/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_cut.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:09:16 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 00:52:11 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*nb_cut(char *nb, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (j < n)
	{
		i = 0;
		while (nb[i + 1])
		{
			nb[i] = nb[i + 1];
			i++;
		}
		nb[i] = '\0';
		j++;
	}
	return (nb);
}
