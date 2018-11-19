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
	unsigned const char *a;
	unsigned const char *b;
  size_t              i;

  i = -1;
	a = (unsigned const char *)s1;
	b = (unsigned const char *)s2;
	while (++i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
	}
	return (*a - *b);
}
