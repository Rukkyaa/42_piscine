/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:37:09 by axlamber          #+#    #+#             */
/*   Updated: 2022/10/04 11:21:02 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
* Function which will check if the tab is sort
*
* @param tab : The tab on which we will apply the functions
* @param length : The size of the tab
* @param f(int, int) : The pointer to the function we are going to apply
*
* @return		: 1 if the tab is sort, 0 if not
*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	index;
	int	ascend;
	int	descend;

	ascend = 1;
	descend = 1;
	if (length <= 1)
		return (1);
	index = 0;
	while (index < length - 1)
	{
		if (f(tab[index], tab[index + 1]) > 0)
			ascend = 0;
		index ++;
	}
	index = 0;
	while (index < length - 1)
	{
		if (f(tab[index], tab[index + 1]) < 0)
			descend = 0;
		index ++;
	}
	if (ascend || descend)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

int	compare_int(int first, int second)
{
	if (first < second)
		return (-1);
	else if (first == second)
		return (0);
	else
		return (1);
}

void	ft_print_tab(int	*tab, int size)
{
	int	index;

	index = 0;
	while (index < size)
	{
		ft_putnbr (tab[index]);
		if (index + 1 < size)
			write(1, ", ", 2);
		index ++;
	}
}

int	main(void)
{
	int	tab0[] = {1, 2, 5, 8, 24, 40};
	int	tab1[] = {-100, -79, 2, 2, 8, 24, 40};
	int	tab2[] = {1};
	int	tab3[] = {2, 1};
	int	tab4[] = {-28, 10, 23, -1};
	int	tab5[] = {};

	write(1, "          ############################################\n", 55);
	write(1, "          ### TEST C11 EXERCICE FT_IS_SORT (EXO 4) ###\n", 55);
	write(1, "          ############################################\n", 55);
	write(1, "          ### Test 1 : ", 23);
	ft_print_tab(tab0, 6);
	printf(" : %d\n", ft_is_sort(tab0, 6, &compare_int));
	write(1, "          ### Test 2 : ", 23);
	ft_print_tab(tab1, 7);
	printf(" : %d\n", ft_is_sort(tab1, 7, &compare_int));
	write(1, "          ### Test 3 : ", 23);
	ft_print_tab(tab2, 1);
	printf(" : %d\n", ft_is_sort(tab2, 1, &compare_int));
	write(1, "          ### Test 4 : ", 23);
	ft_print_tab(tab3, 2);
	printf(" : %d\n", ft_is_sort(tab3, 2, &compare_int));
	write(1, "          ### Test 5 : ", 23);
	ft_print_tab(tab4, 4);
	printf(" : %d\n", ft_is_sort(tab4, 4, &compare_int));
	write(1, "          ### Test 6 : ", 23);
	ft_print_tab(tab5, 0);
	printf(" : %d\n", ft_is_sort(tab5, 0, &compare_int));
	write(1, "          ############################################\n", 55);
	write(1, "          ###                                      ###\n", 55);
	write(1, "          ###             Test termine             ###\n", 55);
	write(1, "          ###                                      ###\n", 55);
	write(1, "          ############################################\n", 55);
}
*/
