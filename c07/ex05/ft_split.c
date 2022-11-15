/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:15:18 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/26 19:22:07 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len ++;
	return (len);
}

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	if (charset[i] == '\0')
		return (0);
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

int	get_number_words(char *str, char *charset)
{
	int	count;

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
	int		len;
	char	*dup;
	int		i;

	i = 0;
	len = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		len ++;
		i ++;
	}
	i = 0;
	dup = malloc ((len + 1) * sizeof(char));
	if (!dup)
		return (0);
	while (i < len)
	{
		dup[i] = str[i];
		i ++;
	}
	dup[len] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	char		**split;
	int const	nb_words = get_number_words(str, charset);
	int			i;

	i = 0;
	if (!str)
	{
		split = malloc(1);
		split[0] = '\0';
		return (split);
	}
	split = malloc((nb_words + 1) * sizeof(char *));
	if (!split)
		return (0);
	split[nb_words] = 0;
	while (i < nb_words)
	{
		while (*str && is_charset(*str, charset))
			str ++;
		split[i] = ft_strdup(str, charset);
		while (*str && !is_charset(*str, charset))
			str ++;
		i ++;
	}
	return (split);
}

/*
int	main(int argc, char **argv)
{
	char	**split;
	int		i;
	char	vide[] = "";
	char str[]= "salut";

	(void) argc;
	split = ft_split(argv[1], argv[2]);
	i = 0;
	while (split[i])
	{
		printf("Mot %d : %s\n", i, split[i]);
		i ++;
	}
	return (0);
}*/
