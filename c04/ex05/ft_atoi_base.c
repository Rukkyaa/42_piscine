/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:41:19 by axlamber          #+#    #+#             */
/*   Updated: 2022/11/15 13:36:25 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_len(char *str)
{
	int	i;

	i = 0;
	while (*str ++)
		i ++;
	return (i);
}

int	is_in_base(char *base, char c)
{
	int	i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == c)
			return (i);
	}
	return (-1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base [i] <= 32 || base[i] > 126 || base[i] == '-' || base[i] == '+')
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

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	int				sign;
	int				result;

	sign = 1;
	i = 0;
	result = 0;
	if (!is_valid_base(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] && is_in_base(base, str[i]) > -1)
	{
		result *= ft_base_len(base);
		result += is_in_base(base, str[i]);
		i ++;
	}
	return (result * sign);
}
