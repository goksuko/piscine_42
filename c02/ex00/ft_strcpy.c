/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/22 16:15:00 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/08/27 10:04:04 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char source[] = "Info";
	char destination[] = "...........";
	
	printf("Before: %s\n", destination);
	ft_strcpy(destination, source);
	printf("After: %s\n", destination);
	return (0);
}*/
