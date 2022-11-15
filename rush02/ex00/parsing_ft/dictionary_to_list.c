/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary_to_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:52:42 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/02 16:38:33 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	free_content(char **content)
{
	int	i;

	i = 0;
	while (content[i])
	{
		free(content[i]);
		i ++;
	}
	free(content[i]);
	free(content);
}

t_list	*dictionary_to_list(int fd)
{
	t_list	*begin;
	t_list	*tmp;
	char	**content;
	int		i;
	char	*str;

	i = 0;
	str = dictionary_to_string(fd);
	if (!str)
		return (NULL);
	content = ft_split(str, "\n");
	begin = NULL;
	if (!content)
		return (NULL);
	while (content[i])
	{
		tmp = parse_line(content[i]);
		if (!tmp)
			return (NULL);
		ft_push_back(&begin, tmp);
		i ++;
	}
	free_content(content);
	free(str);
	return (begin);
}
