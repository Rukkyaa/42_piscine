/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:22:08 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/04 12:12:41 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Function to compare 2 strings
*
* @param s1 : The first string
* @param s2 : The second string
*
* @return		: Difference between the 2 strings
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i ++;
	return (s1[i] - s2[i]);
}

/**
* Function to swap 2 strings
*
* @param s1 : The first string to swap
* @param s2 : The second string to swap
*/

void	ft_strswap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

/**
* Function to sort a tab
*
* @param tab : The tab to sort
*/

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				ft_strswap(&tab[i], &tab[j]);
			j ++;
		}
		i ++;
	}
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argv[argc] = 0;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i ++;
	}
	ft_sort_string_tab(argv);
	printf("\nSort tab :\n");
	i = 0;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i ++;
	}
}*/
