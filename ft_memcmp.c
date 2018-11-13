/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:02:07 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 18:24:46 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char *so;
	unsigned const char *st;

	so = (unsigned const char *)s1;
	st = (unsigned const char *)s2;
	while (so == st)
	{
		if (*so == '\0' && *st == '\0')
			return (0);
		so++;
		st++;
	}
	return (*so - *st);
}
