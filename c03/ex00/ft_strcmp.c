/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/27 11:18:44 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/08/31 16:05:15 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char	string1[] = "Ankara";
	char	string2[] = "Ankata";
	printf("my code: %d.\n", ft_strcmp(string1, string2));
	printf("original: %d.\n", strcmp(string1, string2));
	return (0);
}
*/
