/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleger <rleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:56:16 by rleger            #+#    #+#             */
/*   Updated: 2022/10/05 23:24:25 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**process_map(int fd)
{
	char	*string;
	char	**map;

	string = map_to_string(fd);
	if (!string)
		return (NULL);
	map = ft_split(string, "\n");
	free(string);
	if (!map)
		return (NULL);
	return (map);
}

int	split_map(int fd)
{
	char	**map;
	int		x;
	int		y;
	int		size;
	int		max;

	x = 0;
	y = 0;
	max = 0;
	if (fd < 0)
		return (ft_error());
	map = process_map(fd);
	if (!map)
		return (ft_error());
	if (!ft_valid(map))
	{
		free_split(map);
		return (ft_error());
	}
	size = ft_solve(&x, &y, map, &max);
	ft_display_sol(map, x, y, size);
	free_split(map);
	return (1);
}
