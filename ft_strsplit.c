/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:49:12 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 18:25:19 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	*str;
	//char	**array;

	if (!(s || c))
		return (NULL);
	i = 0;
	while (s)
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			i++;
			j++;
		}
		if (j)
		{
			if (!(str = ft_strnew(j)))
				return (NULL);
			str = ft_strsub(s, i, j);
			printf("current string made: %s", str);
		}
	}
	return (str);
}
