/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:46:29 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/01 13:58:28 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

int	check_inputs(int argc, char **argv, int *fd)
{
	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else if (argc == 2)
		*fd = open("numbers.dict", O_RDONLY);
	else if (argc == 3)
		*fd = open(argv[1], O_RDONLY);
	return (1);
}
