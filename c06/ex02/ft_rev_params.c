/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:12:42 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/18 16:19:59 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str ++);
	}
}

int	main(int argc, char **argv)
{
	while (-- argc > 0)
	{
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
	}
}
