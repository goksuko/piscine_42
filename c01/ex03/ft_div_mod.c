/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/21 17:16:05 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/08/23 13:27:52 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int dd;
	int dr;
	int q;
	int r;

	dd = 25;
	dr = 6;
	ft_div_mod(dd, dr, &q, &r);
	printf("Dividend is %d\n", dd);
	printf("Divisor is %d\n", dr);
	printf("Quotient is %d\n", q);
	printf("Remainder is %d\n", r);
}*/
