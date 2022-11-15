/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:20:02 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/04 10:41:04 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Apply a fonction to each elements of the tab 
*
* @param tab : The tab on which we will apply the functions
* @param length : The size of the tab
* @param f(int) : The pointer to the function we are going to apply
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	index;

	index = 0;
	while (index < length)
	{
		f(tab[index]);
		index ++;
	}
}

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

int	main(void)
{
	int	tab1[] = {2, 43, 12, -32, 0, 21, 9274, -3252};
	int	tab2[] = {};

	ft_foreach(tab1, 8, &ft_putnbr);
	ft_putchar('\n');
	ft_foreach(tab2, 0, &ft_putnbr);
}
*/
