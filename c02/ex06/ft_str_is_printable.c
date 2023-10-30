/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: akaya-oz <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/26 17:55:07 by akaya-oz      #+#    #+#                 */
/*   Updated: 2023/08/28 17:06:04 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	string[] = "hakhlalsd;as\td";

	printf("%d", ft_str_is_printable(string));
	return (0);
}*/
