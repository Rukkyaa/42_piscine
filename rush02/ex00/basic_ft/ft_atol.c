/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:10:46 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 00:10:48 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

long int	ft_atol(char *str)
{
	int			i;
	int			n;
	long int	resultat;

	i = 0;
	n = 1;
	resultat = 0;
	if (validstr(str) == 1)
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			resultat = resultat * 10 + (str[i] - 48);
			i++;
		}
		return (resultat * n);
	}
	return (0);
}
