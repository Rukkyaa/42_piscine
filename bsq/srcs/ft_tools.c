/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleger <rleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:21:38 by rleger            #+#    #+#             */
/*   Updated: 2022/10/04 14:02:51 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_min(int nb1, int nb2, int nb3)
{
	if (nb1 < nb2 && nb1 < nb3)
		return (nb1);
	else if (nb2 < nb3)
		return (nb2);
	else
		return (nb3);
	return (0);
}

void	ft_putchar(char chr)
{
	write(1, &chr, 1);
}

unsigned long long int	ft_atoulli(char *str)
{
	int						ctr;
	unsigned long long int	res;
	unsigned long long int	sign;

	ctr = 0;
	sign = 1;
	res = 0;
	while (str[ctr] && (str[ctr] == 32 || (str[ctr] >= 9 && str[ctr] <= 13)))
		ctr ++;
	while (str[ctr] == 43 || str[ctr] == 45)
	{
		if (str[ctr == 45])
			sign *= -1;
		ctr ++;
	}
	while (str[ctr] >= '0' && str[ctr] <= '9')
		res = res * 10 + (str[ctr++] - 48);
	return (res * sign);
}

char	*ft_tendup(char *str, int size)
{
	char	*dup;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(str);
	dup = malloc((ft_strlen(str) - size + 1) * sizeof(*dup));
	if (!dup)
		return (0);
	while (++i < len - size)
		dup[i] = str[i];
	dup[i] = 0;
	return (dup);
}

char	*ft_get_params(char *str)
{
	int	size;
	int	ctr;

	size = ft_strlen(str);
	ctr = size - 3;
	while (ctr <= size)
	{
		str[ctr - size + 3] = str[ctr];
		ctr ++;
	}
	return (str);
}
