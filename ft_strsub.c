/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:46:17 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/12 19:48:56 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
