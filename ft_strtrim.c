/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:49:33 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 18:19:24 by azkeever         ###   ########.fr       */
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
	while (s[j - 1] == ' ' || r[j] == '\t' || r[j] == '\n')
		j--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
		j--;
	}
	if ((j < 0) || !(ft_strnew(j)))
		return (NULL);
	s += i;
	i = 0;
	while (i < j)
		r[i++] = *s++;
	r[i] = '\0';
	return (r);
}
