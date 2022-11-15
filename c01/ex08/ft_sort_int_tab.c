/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:33:30 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/14 20:41:17 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	jindex;
	int	temp;

	index = 0;
	while (index < size)
	{
		jindex = index + 1;
		while (jindex < size)
		{
			if (tab[jindex] < tab[index])
			{
				temp = tab[index];
				tab[index] = tab[jindex];
				tab[jindex] = temp;
			}
			jindex ++;
		}
		index ++;
	}
}
