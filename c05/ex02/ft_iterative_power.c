/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:18:15 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/18 15:52:07 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;
	int	i;

	i = 0;
	resultat = 1;
	if (power < 0)
		return (0);
	while (i ++ < power)
		resultat *= nb;
	return (resultat);
}
