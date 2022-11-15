/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:45:27 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 17:37:25 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_list	*parse_line(char *str)
{
	unsigned int	nb_len;
	unsigned int	word_len;
	unsigned int	i;
	t_list			*node_to_add;

	nb_len = ft_nb_len(str);
	i = nb_len;
	word_len = 0;
	if (i == 0)
		return (dict_error());
	ft_delspace(str, &i);
	if (str[i] != ':')
		return (dict_error());
	i ++;
	ft_delspace(str, &i);
	while (str[word_len + i])
		word_len ++;
	if (!word_len)
		return (dict_error());
	node_to_add = ft_create_node(word_len);
	node_to_add -> number = ft_get_number(str, nb_len);
	node_to_add -> word = ft_get_word(str, word_len, i);
	if (!node_to_add->number || !node_to_add->word)
		return (NULL);
	return (node_to_add);
}
