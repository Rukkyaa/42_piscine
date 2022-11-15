/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:17:08 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/18 20:04:26 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(char start, char content, char end, int length)
{
	ft_putchar(start);
	length --;
	while (length > 1)
	{
		ft_putchar(content);
		length --;
	}
	if (length == 1)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	ft_display('o', '-', 'o', x);
	y --;
	while (y > 1)
	{
		ft_display('|', ' ', '|', x);
		y --;
	}
	if (y == 1)
		ft_display('o', '-', 'o', x);
}
