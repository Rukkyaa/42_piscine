/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:36:45 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 00:11:15 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_get_number(char *str, int nb_len)
{
	char	*number;
	int		i;

	i = 0;
	number = malloc((nb_len + 1) * sizeof(char));
	while (i < nb_len)
	{
		number[i] = str[i];
		i ++;
	}
	number[i] = '\0';
	return (number);
}
