/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:10:44 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/12 16:41:24 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *d;

	d = b;	
	i = 0;
	while (i < len && len != 0)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
