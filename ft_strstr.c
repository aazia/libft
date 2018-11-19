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

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!(needle))
		return ((char *)haystack);
	while (haystack[j])
	{
		while (needle[i] == haystack[j] && needle[i] && haystack[j])
		{
			i++;
			j++;
		}
		if (needle[i] == '\0')
			return ((char *)(haystack + j - i));
		if (i)
			j -= i;
		j++;
		i = 0;
	}
	return (NULL);
}
