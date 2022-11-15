/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:31:13 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/04 10:56:00 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
* Stores in an array the return of each element of the array
*
* @param tab : The tab on which we will apply the functions
* @param length : The size of the tab
* @param f(int) : The pointer to the function we are going to apply
*
* @return		: A tab with all returns values of the param's tab
*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*map;
	int	index;

	index = 0;
	map = malloc(length * sizeof(int));
	while (index < length)
	{
		map[index] = f(tab[index]);
		index ++;
	}
	return (map);
}

/*
#include <stdio.h>

int	ft_is_positive(int number)
{
	if (number < 0)
		return (0);
	return (1);
}

int	main(void)
{
	int	*tab_return;
	int	tab[] = {213, 1, -12, 0, -13, 4, 23423};
	int	i;

	tab_return = ft_map(tab, 7, &ft_is_positive);
	i = 0;
	while (i < 7)
	{
		printf("ft_is_positive(%d) -> \"%d\"\n", tab[i], tab_return[i]);
		i ++;
	}
}
*/
