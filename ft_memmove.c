/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:53:14 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 16:27:15 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char *s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (src > dst)
	{
		while (i++ < len)
			d[i] = s[i];
	}
	if (src < dst)
	{
		while (len--)
			d[len] = s[len];
	}
	return (d);
}
