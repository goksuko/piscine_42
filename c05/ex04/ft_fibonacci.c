/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/03 15:43:27 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/09/03 15:45:31 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index == 2)
	{
		return (1);
	}
	else if (index > 2)
	{
		index = index - 1;
		result = ft_fibonacci(index - 1) + ft_fibonacci(index);
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d\n", ft_fibonacci(-5));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));
	return (0);
}
*/
/*
 * (0) 0
 * (1) 0+1
 * (2) 0+1+1            = 1 + (1) 
 * (3) 0+1+1+2          = 2 + (2) 
 * (4) 0+1+1+2+3        = 3 + (3) 
 * (5) 0+1+1+2+3+5      = 5 + (4)
 * (6) 0+1+1+2+3+5+8    = 8 + (5)
 * (7)        +3+5+8+13 = 13 + (6)
 * */
