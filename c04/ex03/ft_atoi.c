/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 09:31:57 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/18 11:14:54 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				sign;
	int				result;

	sign = 1;
	i = 0;
	result = 0;
	while (ft_is_space(str[i]))
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] && ft_is_number(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i ++;
	}
	return (result * sign);
}
