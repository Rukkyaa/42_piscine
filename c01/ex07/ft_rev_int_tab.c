/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:11:26 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/15 08:31:02 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	tempo;

	index = 0;
	while (index < size / 2)
	{
		tempo = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = tempo;
		index ++;
	}
}
