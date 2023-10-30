/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 15:46:14 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/09/05 16:49:56 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;
	int	result;

	if (nb < 1)
	{
		return (0);
	}
	a = 1;
	while (a * a < nb && a < 46341)
	{
		a++;
	}
	if (nb >= 1 && (nb / a) == a && (nb % a) == 0)
	{
		result = nb / a;
		return (result); 
	}
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(5));
	return (0);
}
*/
