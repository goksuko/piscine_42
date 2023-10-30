/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaya-oz <akaya-oz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:16:19 by akaya-oz          #+#    #+#             */
/*   Updated: 2023/08/31 18:50:13 by akaya-oz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
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
int    main(void)
{
    char    string1[] = "ankara";
    char    string2[] = "ankbra";
   	unsigned int n;

	n = 6;
    printf("original %d.\n", strncmp(string1,string2,n));
    printf("my code %d.\n", ft_strncmp(string1,string2,n));
    return(0);
}*/

// i do not know why (n-one) but it works this way :)
