/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/29 13:30:27 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/09/04 11:36:46 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	if (nb >= 0 && nb <= 2147483647)
	{
		ft_putchar((nb % 10) + '0');
	}
}
/*
int	main(void)
{
	int num;

	num = -2147483648;
	ft_putnbr(num);
	ft_putnbr(15);
	ft_putnbr(156);
	ft_putnbr(-568);
	ft_putnbr(0);
	ft_putnbr(9);
	return (0);
}
*/
