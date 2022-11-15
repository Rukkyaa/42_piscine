/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleger <rleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:27:45 by rleger            #+#    #+#             */
/*   Updated: 2022/10/05 22:13:26 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	init_max(int *x, int *y, char **map, int *max)
{
	int	i;
	int	j;

	j = -1;
	while (map[1][++j])
	{
		if (map[1][j] == map[0][1])
		{
			*x = 1;
			*y = j;
			*max = 1;
			return ;
		}
	}
	i = 0;
	while (map[++i])
	{
		if (map[i][0] == map[0][1])
		{
			*x = i;
			*y = 0;
			*max = 1;
			return ;
		}
	}
}
