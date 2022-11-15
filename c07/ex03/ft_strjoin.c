/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:05:20 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/29 14:50:00 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

int	get_full_length(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		if (i < size - 1)
			total += ft_strlen(sep);
		total += ft_strlen(strs[i]);
		i ++;
	}
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	while (src[j])
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*str;
	int		i;

	length = get_full_length(size, strs, sep);
	str = malloc ((length + 1) * sizeof(char));
	if (!str)
		return (0);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	i = 0;
	str[0] = 0;
	str[length] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i ++;
	}
	return (str);
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("%s", ft_strjoin(8, argv, argv[argc - 1]));
	return (0);
}
*/
