/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:54:27 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 15:43:37 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

typedef struct s_list
{
	char			*number;
	char			*word;
	int				len_word;
	struct s_list	*next;
}				t_list;

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			check_inputs(int argc, char **argv, int *fd);
int			ft_strlen(char *str);
int			ft_nb_len(char *str);
int			ft_itoa_len(int nb);
int			ft_strcmp(char *s1, char *s2);
int			validstr(char *str);
char		**ft_split(char *str, char *charset);
char		*dictionary_to_string(int fd);
char		*strncat_modif(int length, char *content, char *buffer);
char		*ft_itoa(int nbr);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*nb_cut(char *nb, unsigned int n);
char		*nb_write2(t_list *list, char *nb, int nb_dec, int *nb2int);
t_list		*dictionary_to_list(int fd);
t_list		*ft_create_node(int word_len);
t_list		*parse_line(char *str);
t_list		*ft_last_node(t_list *begin);
void		ft_push_back(t_list **begin, t_list *node);
void		ft_show_list(t_list *list);
void		ft_delspace(char *str, unsigned int *pos);
void		hundreds(t_list *list, unsigned int nb, int last);
void		hundreds2(t_list *list, unsigned int tens,
				unsigned int units, int last);
void		aff_words(t_list *list, int nb_dec, char *nb_dec2char, char *nb);
void		*dict_error(void);
void		nb_write(char *nb, t_list *list);
char		*ft_get_number(char *str, int nb_len);
char		*ft_get_word(char *str, int word_len, int pos);
long int	ft_atol(char *str);

void		dict(t_list *list, char *n);
char		*atoi_argv(char *number);
#endif
