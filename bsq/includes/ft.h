/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:50:21 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/05 21:17:59 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

void					init_max(int *x, int *y, char **map, int *max);
char					*map_to_string(int fd);
char					*strncat_modif(int length, char *string, char *buffer);
char					**ft_split(char *string, char *delim);
int						**convert_map(char **map, char *charset, int *lim);
int						ft_strlen(char *str);
int						ft_min(int nb1, int nb2, int nb3);
char					*ft_get_params(char *str);
int						**convert_map(char **map, char *charset, int *lim);
char					*ft_tendup(char *str, int size);
unsigned long long int	ft_atoulli(char *str);
int						ft_solve(int *x, int *y, char **map, int *max);
void					ft_display_sol(char **map, int x, int y, int size);
int						ft_valid(char **map);
void					ft_putchar(char c);
char					**process_mapfd(char *string);
int						split_mapfd(char *string);
char					*fd_to_string(void);
void					free_split(char **split);
char					**process_map(int fd);
int						split_map(int fd);
int						ft_error(void);

#endif
