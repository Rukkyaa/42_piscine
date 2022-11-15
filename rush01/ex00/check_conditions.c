/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conditions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:51:07 by tvo               #+#    #+#             */
/*   Updated: 2022/09/25 17:58:19 by avast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"source.h"

int	check_col_from_up(int tab[4][4], int pos, int inputs[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i++;
		}
		if (inputs[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_col_from_down(int tab[4][4], int pos, int inputs[16])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i--;
		}
		if (inputs[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_row_from_left(int tab[4][4], int pos, int inputs[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (inputs[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check_row_from_right(int tab[4][4], int pos, int inputs[16])
{
	int	i;
	int	max_size;
	int	count;

	i = 4;
	max_size = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				count++;
			}
		}
		if (inputs[12 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check_conditions(int tab[4][4], int pos, int inputs[16])
{
	if (check_col_from_up(tab, pos, inputs) == 1)
		return (1);
	if (check_col_from_down(tab, pos, inputs) == 1)
		return (1);
	if (check_row_from_left(tab, pos, inputs) == 1)
		return (1);
	if (check_row_from_right(tab, pos, inputs) == 1)
		return (1);
	return (0);
}
