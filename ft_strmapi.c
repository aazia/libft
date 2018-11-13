/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:46:08 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 18:15:21 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;
	size_t	b;

	if (s && f)
	{
		i = 0;
		b = ft_strlen(s);
		if (!(new = ft_strnew(b)))
			return (NULL);
		while (s[i++])
			new[i] = f(i, s[i]);
		return (new);
	}
	return (NULL);
}