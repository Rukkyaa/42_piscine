/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:01:43 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 15:06:26 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	hundreds2(t_list *list, unsigned int tens, unsigned int units, int last)
{
	char	*str;

	str = ft_itoa(tens);
	if (tens >= 10)
	{
		dict(list, str);
		if (tens >= 20 && units > 0)
			write(1, "-", 1);
		else if (last == 0)
			write(1, " ", 1);
		else
			write(1, "\n", 1);
	}
	free(str);
	str = ft_itoa(units);
	if (tens < 10 || tens >= 20)
	{
		if (units > 0)
		{
			dict(list, str);
			if (last == 0)
				write(1, " ", 1);
		}
		if (last == 1)
			write(1, "\n", 1);
	}
	free(str);
}

void	hundreds(t_list *list, unsigned int nb, int last)
{
	unsigned int	hundreds;
	unsigned int	tens;
	unsigned int	units;
	char			*str;

	hundreds = nb / 100;
	nb = nb % 100;
	tens = nb / 10;
	tens = tens * 10;
	if (tens == 10)
		tens = nb;
	units = nb % 10;
	str = ft_itoa(hundreds);
	if (hundreds > 0)
	{
		dict(list, str);
		write(1, " ", 1);
		dict(list, "100");
		write(1, " ", 1);
	}
	free(str);
	hundreds2(list, tens, units, last);
}

void	aff_words(t_list *list, int nb_dec, char *nb_dec2char, char *nb)
{
	int	nb_dec2;

	nb_dec2 = nb_dec;
	nb_dec2char[0] = '1';
	while (nb_dec2 - 1)
	{
		nb_dec2char[nb_dec - nb_dec2 + 1] = '0';
		nb_dec2--;
	}
	nb_dec2char[nb_dec] = '\0';
	dict(list, nb_dec2char);
	if (ft_atol(nb))
		write(1, " ", 1);
}

char	*nb_write2(t_list *list, char *nb, int nb_dec, int *nb2int)
{
	char	*nb2;

	nb2 = malloc((ft_strlen(nb) + 1) * sizeof(char));
	if (!nb2)
		return (0);
	if (ft_strlen(nb) == nb_dec + 1)
	{
		nb2 = ft_strncpy(nb2, nb, 2);
		*nb2int = ft_atol(nb2);
		hundreds(list, *nb2int, 0);
		nb = nb_cut(nb, 2);
	}
	else if (ft_strlen(nb) == nb_dec + 2)
	{
		nb2 = ft_strncpy(nb2, nb, 3);
		*nb2int = ft_atol(nb2);
		hundreds(list, *nb2int, 0);
		nb = nb_cut(nb, 3);
	}
	else
	{
		nb2 = ft_strncpy(nb2, nb, 1);
		*nb2int = ft_atol(nb2);
		hundreds(list, *nb2int, 0);
		nb = nb_cut(nb, 1);
	}
	free(nb2);
	return (nb);
}

void	nb_write(char *nb, t_list *list)
{
	int		nb2int;
	int		nb_dec;
	char	*nb_dec2char;

	nb_dec = ft_strlen(nb);
	if (atol(nb) == 0)
	{
		dict(list, "0");
		write(1, "\n", 1);
		return ;
	}
	while (nb_dec % 3 != 1)
		nb_dec--;
	nb_dec2char = malloc((nb_dec + 1) * sizeof(char));
	if (!nb_dec2char)
		return ;
	while (nb_dec > 1)
	{
		if (ft_strlen(nb) >= nb_dec)
		{
			nb = nb_write2(list, nb, nb_dec, &nb2int);
			if (!nb)
				return ;
			if (nb2int != 0)
				aff_words(list, nb_dec, nb_dec2char, nb);
		}
		nb_dec = nb_dec - 3;
	}
	if (nb_dec >= 1)
		hundreds(list, ft_atol(nb), 1);
	free(nb_dec2char);
}
