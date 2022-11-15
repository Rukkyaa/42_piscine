/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:51:49 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 15:00:58 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_itoa(int nbr)
{
	char	*string;
	int		len;

	if (nbr == 0)
	{
		string = malloc(2);
		if (!string)
			return (0);
		string[0] = '0';
		string[1] = '\0';
		return (string);
	}
	len = ft_itoa_len(nbr);
	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	string[len] = '\0';
	while (nbr > 0)
	{
		string[len - 1] = (nbr % 10) + 48;
		nbr /= 10;
		len --;
	}
	return (string);
}
