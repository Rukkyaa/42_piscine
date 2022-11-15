/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleger <rleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:40:46 by rleger            #+#    #+#             */
/*   Updated: 2022/10/05 23:36:09 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_valid_charset(char *charset)
{
	if (ft_strlen(charset) < 4)
		return (0);
	if (*charset < '1' && *charset > '9')
		return (0);
	while (*charset >= '0' && *charset <= '9')
		charset ++;
	if (ft_strlen(charset) > 3)
		return (0);
	if (*charset == *(charset + 1) || *charset == *(charset + 2)
		|| *(charset + 1) == *(charset + 2))
		return (0);
	return (1);
}

int	ft_in_charset(char chr, char *charset)
{
	while (*charset)
	{
		if (chr == *(charset ++))
			return (1);
	}
	return (0);
}

int	ft_str_in_charset(char *str, char *charset)
{
	while (*str)
	{
		if (!(ft_in_charset(*(str ++), charset)))
			return (0);
	}
	return (1);
}

int	ft_lines_len(char **map)
{
	unsigned long long int	i;
	unsigned long long int	ysize;
	unsigned long long int	xsize;
	char					*strint_dup;

	strint_dup = ft_tendup(map[0], 3);
	if (!strint_dup)
		return (0);
	xsize = ft_strlen(map[1]);
	ysize = ft_atoulli(strint_dup);
	free(strint_dup);
	i = 0;
	while (map[++i])
		if ((unsigned long long int)ft_strlen(map[i]) != xsize
			|| !ft_str_in_charset(map[i], map[0]))
			return (0);
	if (ysize != i - 1)
		return (0);
	return (1);
}

int	ft_valid(char **map)
{
	if (!map[0])
		return (0);
	if (!map[1])
		return (0);
	if (!ft_valid_charset(map[0]))
		return (0);
	if (!ft_lines_len(map))
		return (0);
	return (1);
}
