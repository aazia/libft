/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 21:47:58 by azkeever          #+#    #+#             */
/*   Updated: 2018/09/05 14:17:17 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
  if (i == 0)
    return (NULL);
  if (c == 0)
    return ((char *)s + ft_strlen(s));
  while (--i >= 0)
    if (s[i] == c)
      return ((char *)s + i);
  return (NULL);
}
