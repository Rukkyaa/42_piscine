/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:39:27 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/03 23:06:33 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include <unistd.h>

void	ft_addition(int a, int b);
void	ft_soustraction(int a, int b);
void	ft_multiplication(int a, int b);
void	ft_division(int a, int b);
void	ft_modulo(int a, int b);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_strlen(char *str);

#endif
