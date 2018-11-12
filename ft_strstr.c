/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:00:19 by azkeever          #+#    #+#             */
/*   Updated: 2018/09/03 22:40:10 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(n))
		return ((char *)s);
	while (s[j])
	{
		while (n[i] == s[j] && n[i] && s[j])
		{
			i++;
			j++;
		}
		if (n[i] == '\0')
			return ((char *)(s + j - i));
		if (i)
			j -= i;
		j++;
		i = 0;
	}
	return (NULL);
}
