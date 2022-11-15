/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avast <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:25:09 by avast             #+#    #+#             */
/*   Updated: 2022/11/15 13:50:36 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "source.h"

int	check_duplicates(int tab[4][4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (tab[pos / 4][i] == num)
			return (1);
	return (0);
}

int	resolve(int tab[4][4], int inputs[16], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (check_duplicates(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (check_conditions(tab, pos, inputs) == 0)
			{
				if (resolve(tab, inputs, pos + 1) == 1)
					return (1);
			}
			else
			tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

void	display_solu(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j < 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int	*inputs;
	int	tab[4][4];
	int	i;

	i = 0;
	while (i < 16)
	{
		tab[i / 4][i % 4] = 0;
		i++;
	}
	if (check_argu(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	inputs = get_numbers(argv[1]);
	if (!inputs)
		return (NULL);
	if (resolve(tab, inputs, 0) == 1)
		display_solu(tab);
	else
		ft_putstr("Error\n");
	free(inputs);
	return (0);
}
