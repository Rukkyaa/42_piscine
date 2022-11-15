/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:43:19 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/25 14:46:04 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_len(char *str)
{
	int	i;

	i = 0;
	while (*str ++)
		i ++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j ++;
		}
		i ++;
	}
	if (ft_base_len(base) < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	nb;

	nb = (long int) nbr;
	if (!(is_valid_base(base)))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	len = ft_base_len(base);
	if (nb >= len)
		ft_putnbr_base(nb / len, base);
	ft_putchar(base[nb % len]);
}

/*
int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(0, "01");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_base((atoi(argv[1])), argv[2]);
}
*/
