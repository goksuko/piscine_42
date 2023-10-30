/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/27 15:32:42 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/08/31 18:59:25 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0')
	{
		dest[c] = src [i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	destination[18] = "hundred";
	char	dest2[18] = "hundred";
	char	source [] = "five";
	//int	i;

	//i = 0;
	//while (i < 18)
	//{
	//	printf("%d\n", destination[i]);
	//	i++;
	//}
	printf("original: %s.\n", strcat(dest2, source));
	printf("my code: %s.\n", ft_strcat(destination, source));
	return (0);
}
*/
