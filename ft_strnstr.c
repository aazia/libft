/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:00:19 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/12 19:09:41 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(n))
		return ((char *)s);
	while (s[j] && len)
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
		len--;
		i = 0;
	}
	return (NULL);
}
