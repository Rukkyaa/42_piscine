/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_modif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:25 by axlamber          #+#    #+#             */
/*   Updated: 2022/11/15 14:00:39 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*strncat_modif(int length, char *content, char *buffer)
{
	int			index;
	char		*str;
	const int	len = length + ft_strlen(content);

	index = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (content[index])
	{
		str[index] = content[index];
		index ++;
	}
	index = 0;
	while (index < length && buffer[index])
	{
		str[index] = buffer[index];
		index ++;
	}
	str[len] = '\0';
	free(content);
	return (str);
}
