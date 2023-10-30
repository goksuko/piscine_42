/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 15:32:19 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/09/05 15:15:12 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
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
	else if (power > 1)
	{
		power = power - 1;
		result = nb * ft_recursive_power(nb, power);
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(5, -3));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2, 5));
	printf("%d\n", ft_recursive_power(5, 1));
	return (0);
}
*/
