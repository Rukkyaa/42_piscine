/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary_to_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:14:04 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 18:41:29 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*dictionary_to_string(int fd)
{
	char	*content;
	char	buffer[1024];
	int		len;

	content = (char *)malloc(1 * sizeof(char));
	if (!content)
		return (NULL);
	len = 1;
	content[0] = '\0';
	while (len > 0)
	{
		len = read(fd, buffer, 1024);
		if (len > 0)
		{
			content = strncat_modif(len, content, buffer);
			if (!content)
				return (NULL);
		}
	}
	return (content);
}
