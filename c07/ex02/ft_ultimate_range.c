/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:42:05 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/25 21:06:34 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i ++;
	}
	return (i);
}

/*
int	main(void)
{
	int	*test;
	int	len;
	int	i;

	len = ft_ultimate_range(&test, -12, 12);
	printf("%d\n", len);
	i = 0;
	while(i < len)
	{
		printf("%d\n", test[i]);
		i ++;
	}
}*/
