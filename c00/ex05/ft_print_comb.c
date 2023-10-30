/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/17 17:49:55 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/08/22 18:41:44 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char	a;
	char	b;
	char	c; //abc number
	char	d; //to make the function stop

	a = '0';
	b = '0';
	c = '0';
	d = '9';


	while (a < b < c <= d)
	{
		while (a < b < c <= d)
		{	
			while (a < b < c <=d)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				write(1, ",", 1);
				write(1, " ", 1); 	
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
