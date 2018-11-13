/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:32:25 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 18:16:14 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (!(ptr = (void *)malloc(sizeof(void) * (size))))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
