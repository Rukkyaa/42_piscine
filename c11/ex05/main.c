/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:50:43 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/06 09:30:32 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/operation.h"

int	check_zero(char **argv)
{
	if (argv[2][0] == '/')
	{
		if (ft_atoi(argv[3]) == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
	}
	if (argv[2][0] == '%')
	{
		if (ft_atoi(argv[3]) == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		first;
	int		second;
	char	op;

	if (argc != 4)
		return (0);
	if (check_zero(argv))
		return (0);
	op = argv[2][0];
	first = ft_atoi(argv[1]);
	second = ft_atoi(argv[3]);
	if (argv[2][1])
		write(1, "0\n", 2);
	else if (op == '+')
		ft_addition(first, second);
	else if (op == '-')
		ft_soustraction(first, second);
	else if (op == '*')
		ft_multiplication(first, second);
	else if (op == '/')
		ft_division(first, second);
	else if (op == '%')
		ft_modulo(first, second);
	else
		write(1, "0\n", 2);
}
