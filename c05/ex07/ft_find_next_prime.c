/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 15:53:36 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/09/03 17:17:41 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2 || nb == 3)
	{
		return (1);
	}
	if (nb % 2 == 0 || nb % 3 == 0)
	{
		return (0);
	}
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (ft_is_prime(nb) == 0)
	{
		nb++;
		ft_find_next_prime(nb);
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(-1));	
	printf("%d\n", ft_find_next_prime(1));	
	printf("%d\n", ft_find_next_prime(4));	
	printf("%d\n", ft_find_next_prime(5));	
	printf("%d\n", ft_find_next_prime(25));
	printf("%d\n", ft_find_next_prime(37));	
	printf("%d\n", ft_find_next_prime(52));
	printf("%d\n", ft_find_next_prime(53));
	printf("%d\n", ft_find_next_prime(54));
	return (0);
}
*/
