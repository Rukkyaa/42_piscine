/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avast <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:33:20 by avast             #+#    #+#             */
/*   Updated: 2022/09/25 22:19:17 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOURCE_H
# define SOURCE_H

int		check_duplicates(int tab[4][4], int pos, int num);

int		resolve(int tab[4][4], int intputs[16], int pos);

void	display_solu(int tab[4][4]);

int		main(int argc, char **argv);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

int		ft_atoi(char *str);

void	ft_putnbr(int nb);

int		check_argu(int argc, char **argv);

int		*get_numbers(char *str);

int		check_col_from_up(int tab[4][4], int pos, int inputs[16]);

int		check_col_from_down(int tab[4][4], int pos, int inputs[16]);

int		check_row_from_left(int tab[4][4], int pos, int inputs[16]);

int		check_row_from_right(int tab[4][4], int pos, int inputs[16]);

int		check_conditions(int tab[4][4], int pos, int inputs[16]);

#endif
