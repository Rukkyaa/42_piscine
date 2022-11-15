/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:58:07 by axlamber          #+#    #+#             */
/*   Updated: 2022/09/16 12:45:08 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i ++;
	while (src[j] && nb)
	{
		dest[i] = src[j];
		i ++;
		j ++;
		nb --;
	}
	dest[i] = '\0';
	return (dest);
}
