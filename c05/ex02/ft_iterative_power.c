/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 15:29:04 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/09/05 15:14:31 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	while (power > 1)
	{
		result = result * nb;
		power = power - 1;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(5, -3));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(5, 1));
	printf("%d\n", ft_iterative_power(-5, -3));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(1, 4));
	printf("%d\n", ft_iterative_power(5, 1));
	return (0);
}
*/
