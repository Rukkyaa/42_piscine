/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:21:26 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/14 13:58:18 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int hundreds, int tens, int units)
{
	ft_putchar('0' + hundreds);
	ft_putchar('0' + tens);
	ft_putchar('0' + units);
	if (hundreds != 7 || tens != 8 || units != 9)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	units;
	int	tens;
	int	hundreds;

	hundreds = 0;
	while (hundreds < 10)
	{
		tens = hundreds + 1;
		while (tens < 10)
		{
			units = tens + 1;
			while (units < 10)
			{
				ft_display(hundreds, tens, units);
				units ++;
			}
			tens ++;
		}
		hundreds ++;
	}
}
