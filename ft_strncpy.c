/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:09:51 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 16:27:52 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	while (*dst && len)
	{
		if (!(*src))
		{
			ft_bzero(dst, len);
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
