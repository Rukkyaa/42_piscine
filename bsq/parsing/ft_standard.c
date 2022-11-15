/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_standard.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleger <rleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:47:51 by rleger            #+#    #+#             */
/*   Updated: 2022/10/05 23:25:24 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**process_mapfd(char *string)
{
	char	**map;

	map = ft_split(string, "\n");
	free(string);
	if (!map)
		return (NULL);
	return (map);
}

int	split_mapfd(char *string)
{
	char	**map;
	int		x;
	int		y;
	int		size;
	int		max;

	max = 0;
	x = 0;
	y = 0;
	map = process_mapfd(string);
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

char	*fd_to_string(void)
{
	char	buffer[50000];
	char	*string;
	int		len;

	string = malloc(1 * sizeof(char));
	if (!string)
		return (NULL);
	len = 1;
	string[0] = '\0';
	while (len > 0)
	{
		len = read(STDIN_FILENO, buffer, 50000);
		if (len > 0)
		{
			string = strncat_modif(len, string, buffer);
			if (!string)
				return (NULL);
		}
	}
	return (string);
}
