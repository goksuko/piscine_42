/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/28 13:21:04 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/09/04 10:43:51 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	while (str != '\0')
	{
		s = str;
		t = to_find;
		while (*s != '\0' && *t != '\0' && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
		{
			return (str);
		}
		if (*s == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "learn c programming";
	char	str2[] = "learn c programming";
	char	to_find[] = "prog";
	
	printf("my code: %s\n", ft_strstr(str, to_find));
	printf("original: %s\n", strstr(str2, to_find));
	return (0);
}
*/

//str++ changes the string and starts from one ahead
