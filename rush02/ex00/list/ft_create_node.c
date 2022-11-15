/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:21:23 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 18:17:27 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_list	*ft_create_node(int word_len)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
	{
		free(node);
		return (NULL);
	}
	node->len_word = word_len;
	node->next = NULL;
	return (node);
}
