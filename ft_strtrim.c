/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:49:33 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 18:55:33 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	if (!(s))
		return (NULL);
	j = ft_strlen(s);
	while (ft_isspace(s[j - 1]))
		j--;
	while (ft_isspace(s[i++]))
		j--;
	if ((j < 0) || !(ft_strnew(j)))
		return (NULL);
	s += i;
	i = 0;
	while (i < j)
		r[i++] = *s++;
	r[i] = '\0';
	return (r);
}
