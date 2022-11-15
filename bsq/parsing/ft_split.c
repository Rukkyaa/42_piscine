/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:49:54 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/04 15:56:59 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

unsigned int	is_charset(char letter, char *charset)
{
	unsigned int	index;

	index = 0;
	if (!charset[index])
		return (0);
	while (charset[index])
	{
		if (charset[index] == letter)
			return (1);
		index ++;
	}
	return (0);
}

unsigned int	get_number_words(char *str, char *charset)
{
	unsigned int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str ++;
		if (*str && !is_charset(*str, charset))
		{
			count ++;
			while (*str && !is_charset(*str, charset))
				str ++;
		}
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	unsigned int	size;
	unsigned int	index;
	char			*dup_string;

	size = 0;
	while (str[size] && !is_charset(str[size], charset))
		size ++;
	dup_string = malloc((size + 1) * sizeof (char));
	if (!dup_string)
		return (0);
	index = 0;
	while (index < size)
	{
		dup_string[index] = str[index];
		index ++;
	}
	dup_string[size] = '\0';
	return (dup_string);
}

char	**ft_split(char *str, char *charset)
{
	char				**string_split;
	unsigned int const	nb_words = get_number_words(str, charset);
	unsigned int		index;

	if (!str)
	{
		string_split = malloc(1);
		string_split[0] = '\0';
		return (string_split);
	}
	string_split = malloc((nb_words + 1) * sizeof(char *));
	if (!string_split)
		return (0);
	index = 0;
	while (index < nb_words)
	{
		while (*str && is_charset(*str, charset))
			str ++;
		string_split[index] = ft_strdup(str, charset);
		while (*str && !is_charset(*str, charset))
			str ++;
		index ++;
	}
	string_split[nb_words] = 0;
	return (string_split);
}
