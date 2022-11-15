/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_modif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:02:55 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/03 12:27:00 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

//Function to concatenate the string to the current buffer

/*
* @param length : nb char readed from the file
* @param string : string containing what has already been read
* @param buffer : string containing what we have just read
*
* @return		: the concatenation of both string, NULL if malloc failed
*/

char	*strncat_modif(int length, char *string, char *buffer)
{
	int			index;
	int			j;
	char		*content;
	int const	len = length + ft_strlen(string);

	content = malloc((len + 1) * sizeof(char));
	if (!content)
		return (NULL);
	index = 0;
	while (string[index])
	{
		content[index] = string[index];
		index ++;
	}
	j = 0;
	while (j < length && buffer[j])
	{
		content[index + j] = buffer[j];
		j ++;
	}
	content[index + j] = '\0';
	free(string);
	return (content);
}
