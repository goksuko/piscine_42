/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/27 18:27:28 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/09/04 10:47:59 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char d[30] =  "xxxxxxx";
	char d2[30] = "xxxxxxx";
	char s[] = "..................";
	unsigned int n;

	n = 10;
	printf(" my code: %s.\n",ft_strncat(d,s,n));
	printf("original: %s.\n", strncat(d2,s,n));
	return (0);   
}
*/
