/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/24 10:11:52 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/08/28 12:47:05 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	destination[] = "longtext";
	char	source[] = "solongtext";
	unsigned int	x;
	
	x = strlen(destination);
	printf("Before: =%s=.\n", destination);
	ft_strncpy(destination, source, x);
	printf("After: =%s=.\n", destination);
	return(0);
}*/
