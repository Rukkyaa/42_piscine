/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:45:03 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/04 13:29:28 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	*ft_strduprow(char *src)
{
	int		size;
	int		*dest;

	size = ft_strlen(src);
	dest = malloc(sizeof(*dest) * (size + 1));
	if (dest == NULL)
		return (0);
	dest[size] = -1;
	return (dest);
}

int	get_map_nbrows(char **map)
{
	int	i;

	i = 0;
	while (map[i++])
		;
	return (i);
}

int	**convert_map(char **map, char *charset, int *lim)
{
	int	i;
	int	j;
	int	**cmap;

	i = 0;
	cmap = malloc(sizeof(*cmap) * (get_map_nbrows(map)));
	if (!cmap)
		return (NULL);
	while (map[++i])
		cmap[i - 1] = ft_strduprow(map[i]);
	i = 0;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == charset[0])
				cmap[i - 1][j] = 1;
			if (map[i][j] == charset[1])
				cmap[i - 1][j] = 0;
		}
	}
	*lim = i - 2;
	return (cmap);
}
