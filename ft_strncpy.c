/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:09:51 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/12 17:15:38 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strncpy(char *dst, const char *src, size_t len)
{
	while (*dst && len)
	{
		if (!(*src))
		{
			ft_bzero(dst);
			len = 0;
		}
		else
		{
			*dst++ = *src++;
			len--;
		}
	}
	return (dst);
}
