/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:31:13 by axlamber          #+#    #+#             */
/*   Updated: 2022/11/15 14:00:05 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/ft.h"

void	free_list(t_list *begin)
{
	t_list	*tmp;

	while (begin)
	{
		free(begin->number);
		free(begin->word);
		tmp = begin->next;
		free(begin);
		begin = tmp;
	}
	free(tmp);
	free(begin);
}

int	main(int argc, char **argv)
{
	int		fd;
	t_list	*begin;

	if (!check_inputs(argc, argv, &fd))
		return (EXIT_FAILURE);
	if (fd < 0)
	{
		fd = open("numbers.dict", O_RDONLY);
		if (fd < 0)
		{
			ft_putstr("Error\n");
			return (EXIT_FAILURE);
		}
	}
	begin = dictionary_to_list(fd);
	if (!begin)
		return (EXIT_FAILURE);
	if (argc == 2)
		atoi_argv(argv[1]);
	if (argc == 3)
		atoi_argv(argv[1]);
	nb_write(argv[2], begin);
	free_list(begin);
	return (EXIT_SUCCESS);
}
