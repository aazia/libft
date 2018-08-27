/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 21:47:58 by azkeever          #+#    #+#             */
/*   Updated: 2018/08/26 23:21:40 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!(c) || (*s == '\0' && c != '\0'))
		return (NULL);
	else if (*s != c)
		return (ft_strchr(++s, c));
	else if (*s == c)
		return ((char *)s);
	return (NULL);
}
