/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:00:19 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/20 17:41:34 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[i] == '\0' || needle == 0)
		return ((char *)haystack);
	while (haystack[j] && len)
	{
		while (needle[i] == haystack[j] && needle[i] && haystack[j] && len)
		{
			i++;
			j++;
			len--;
		}
		if (needle[i] == '\0')
			return ((char *)(haystack + j - i));
		if (i)
			j -= i;
		j++;
		i = 0;
		len--;
	}
	return (NULL);
}
