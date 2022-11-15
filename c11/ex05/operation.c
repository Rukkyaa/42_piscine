/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:33:55 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/05 16:24:35 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/operation.h"

void	ft_addition(int a, int b)
{
	ft_putnbr(a + b);
	ft_putstr("\n");
}

void	ft_soustraction(int a, int b)
{
	ft_putnbr(a - b);
	ft_putstr("\n");
}

void	ft_multiplication(int a, int b)
{
	ft_putnbr(a * b);
	ft_putstr("\n");
}

void	ft_division(int a, int b)
{
	ft_putnbr(a / b);
	ft_putstr("\n");
}

void	ft_modulo(int a, int b)
{
	ft_putnbr(a % b);
	ft_putstr("\n");
}
