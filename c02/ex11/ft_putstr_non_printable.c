/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:13:16 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/25 10:28:52 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_base(int nb)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	if (nb <= 0)
		nb = nb + 256;
	ft_putchar(base[nb / 16]);
	ft_putchar(base[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			hex_base((int)str[i]);
		i++;
	}
}

/*
int	main(void)
{
	ft_putstr_non_printable("Salut \200 c VA ?\n\t");
}*/
