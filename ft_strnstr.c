/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:00:19 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/21 23:20:40 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[i] == '\0' || needle == 0)
		return ((char *)haystack);
	while (haystack[j] && (j + ft_strlen(needle)) < len)
	{
		//printf("insidethe 1st while haystack[j] = %c j = %zu len = %zu\n", haystack[j], j, len);
		while (needle[i] == haystack[j + i] && needle[i] && haystack[j + i])
		{
			i++;
			printf("inside the 2nd while n[i] = %c, i = %zu h[j] = %c j = %zu, len = %zu\n", needle[i], i, haystack[j + i], j, len);
		}
		if (needle[i] == '\0')
			return ((char *)(haystack + j));
		j++;
		i = 0;
	}
	return (NULL);
}
