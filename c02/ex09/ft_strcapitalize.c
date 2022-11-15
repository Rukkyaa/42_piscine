/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:10:00 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/15 17:38:50 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i ++;
	}
	return (str);
}

int	ft_is_alpha_num(char letter)
{
	if ((letter >= '0' && letter <= '9')
		|| (letter >= 'A' && letter <= 'Z')
		|| (letter >= 'a' && letter <= 'z'))
		return (1);
	return (0);
}

int	ft_is_lowercase(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	str = ft_strlowcase(str);
	if (ft_is_lowercase(str[0]))
		str[0] -= 32;
	i ++;
	while (str[i] != '\0')
	{
		if (!(ft_is_alpha_num(str[i - 1])) && ft_is_lowercase(str[i]))
			str[i] -= 32;
		i ++;
	}
	return (str);
}
