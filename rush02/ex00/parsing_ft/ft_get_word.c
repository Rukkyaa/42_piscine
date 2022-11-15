/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:34:38 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 00:11:52 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_get_word(char *str, int word_len, int pos)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((word_len + 1) * sizeof(char));
	while (pos + i < word_len + pos)
	{
		word[i] = str[pos];
		pos ++;
		i ++;
	}
	word[i] = '\0';
	return (word);
}
