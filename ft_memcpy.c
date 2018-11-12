/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:15:05 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/12 17:19:04 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*og;

	og = (unsigned char *)dst;
	while (n != 0)
	{
		*dst++ = ((unsigned char *)*src)++;
		n--;
	}
	return (og);
}
