/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:12:02 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/27 11:48:25 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	size;

	size = 0;
	while (*src ++)
		size ++;
	return (size);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dup;

	i = 0;
	size = ft_strlen(src);
	dup = (char *) malloc((size + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i ++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
int	main(void)
{
	char 	src[4] = "Test";
	char	*dup;

	src = "Test";
	dup = ft_strdup(src);
	printf("String : %s\nDup : %s\n", src, dup);
}*/
