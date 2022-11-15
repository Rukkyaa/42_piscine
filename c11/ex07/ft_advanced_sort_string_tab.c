/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:38:37 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/05 16:28:11 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_tab_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i ++;
	return (i);
}

/**
* Function to sort the tab according to the function in param
*
* @param tab : The tab to sort
* @param cmp(char *, char *)
*/

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	tablen;

	tablen = ft_tab_len(tab);
	i = 0;
	while (i < tablen - 1)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_strswap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i ++;
	}
}

/*
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i ++;
	return (s1[i] - s2[i]);
}

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
	ft_advanced_sort_string_tab(argv, &ft_strcmp);
	printf("\nSort tab :\n");
	i = 0;
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i ++;
	}
}
*/
