/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:45:38 by tvo               #+#    #+#             */
/*   Updated: 2022/09/25 18:09:29 by avast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"source.h"

int	check_argu(int argc, char **argv)
{
	if (argc != 2)
	{
		return (1);
	}
	if (ft_strlen(argv[1]) != 31)
	{
		return (1);
	}
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	if (!tab)
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j++] = ft_atoi(str + i);
		}
	}
	return (tab);
}
