/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:15:05 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 18:17:23 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*og;
	const unsigned char	*s;

	og = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n != 0)
	{
		*og++ = *s;
		n--;
	}
	return (dst);
}
