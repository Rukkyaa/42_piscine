/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:41:10 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/14 14:00:52 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int first, int second)
{
	ft_putchar('0' + first / 10);
	ft_putchar('0' + first % 10);
	ft_putchar(' ');
	ft_putchar('0' + second / 10);
	ft_putchar('0' + second % 10);
	if (first != 98 || second != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_display(first, second);
			second ++;
		}
		first ++;
	}
}
