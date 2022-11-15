/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:53:34 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/05 22:45:21 by rleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*map_to_string(int fd)
{
	char	buffer[50000];
	char	*string;
	int		len;

	string = malloc(1 * sizeof(char));
	if (!string)
		return (NULL);
	len = 1;
	string[0] = '\0';
	while (len > 0)
	{
		len = read(fd, buffer, 50000);
		if (len > 0)
		{
			string = strncat_modif(len, string, buffer);
			if (!string)
				return (NULL);
		}
	}
	return (string);
}
