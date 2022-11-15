/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleger <rleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:20:19 by rleger            #+#    #+#             */
/*   Updated: 2022/10/05 22:05:18 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	get_update_max(int i, int j, int *pmax, int **imap)
{	
	if (imap[i][j] != 0)
	{
		imap[i][j] = ft_min(imap[i - 1][j],
				imap[i - 1][j - 1], imap[i][j - 1]) + 1;
		if (imap[i][j] > *pmax)
		{
			*pmax = imap[i][j];
			return (1);
		}
	}
	return (0);
}

void	la_norminette(int *x, int *y, int i, int j)
{
	*x = i + 1;
	*y = j;
}

int	ft_solve(int *x, int *y, char **map, int *max)
{
	int	i;
	int	j;
	int	**imap;
	int	lim;

	init_max(x, y, map, max);
	i = 0;
	lim = 0;
	imap = convert_map(map, ft_get_params(map[0]), &lim);
	while (++i <= lim)
	{
		j = 0;
		while (imap[i][++j] != -1)
			if (get_update_max(i, j, max, imap))
				la_norminette(x, y, i, j);
		free(imap[i - 1]);
	}
	free(imap[i - 1]);
	free(imap);
	return (*max);
}

void	ft_display_sol(char **map, int x, int y, int size)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if ((i > x - size && j > y - size && j <= y && i <= x))
				map[i][j] = map[0][2];
		}
		write(1, map[i], j);
		write(1, "\n", 1);
	}
}
