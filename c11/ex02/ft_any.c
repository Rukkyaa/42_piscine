/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:00:15 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/04 11:04:07 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Function which will return 1 if, passing it to the function f, at least one
* array element returns anything other than 0, otherwise it will return 0
*
* @param tab : The tab on which we will apply the functions
* @param length : The size of the tab
* @param f(int) : The pointer to the function we are going to apply
*
* @return		: A tab with all returns values of the param's tab
*/

int	ft_any(char **tab, int (*f)(char*))
{
	int	index;

	index = 0;
	while (tab[index])
	{
		if (f(tab[index]) != 0)
			return (1);
		index ++;
	}
	return (0);
}

/*
#include <stdio.h>

int	is_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_any(argv, &is_a));
	return (1);
}
*/
