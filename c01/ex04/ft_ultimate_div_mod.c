/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 12:44:38 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/08/23 13:31:12 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	q;
	int	r;

	q = *a / *b;
	r = *a % *b;
	*a = q;
	*b = r;
}
/*
int	main(void)
{
	int x;
	int y;

	x = 58;
	y = 6;
	printf("Before division x by y: %d and %d.\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After division x by y: %d and %d.\n", x, y);
	return (0);
}*/
