/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:53:03 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/01 23:02:59 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	itoa_len(int nb, char *base)
{
	int	i;
	int	base_len;

	base_len = ft_base_len(base);
	i = 0;
	if (nb < 0)
	{
		i ++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= base_len;
		i ++;
	}
	return (i);
}

char	*ft_itoa_base(int nbr, char *base, int base_len)
{
	char	*string;
	int		len;

	len = itoa_len(nbr, base);
	if (nbr == 0)
	{
		string = malloc(2);
		string[0] = base[0];
		string[1] = '\0';
		return (string);
	}
	string = malloc((len + 1) * sizeof(char));
	string [len] = '\0';
	if (nbr < 0)
	{
		string[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		string[len - 1] = base[nbr % base_len];
		nbr /= base_len;
		len --;
	}
	return (string);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			nbr_base_from;
	char		*copy;
	int const	base_len = ft_base_len(base_to);

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (0);
	copy = malloc((ft_base_len(nbr) + 1) * sizeof (char));
	copy = ft_strcpy(copy, nbr);
	nbr_base_from = ft_atoi_base(copy, base_from);
	return (ft_itoa_base(nbr_base_from, base_to, base_len));
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	if (ft_convert_base(argv[1], argv[2], argv[3]))
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
}*/
