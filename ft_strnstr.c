/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:00:19 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/12 19:09:41 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *n, size_t len)
{
	size_t i;
	size_t j;
  size_t k;

	i = 0;
	k = 0;
	if (!(n))
		return ((char *)s);
	while (s[i])
	{
    j = 0;
    if (s[i] == n[j])
    {
      k = i;
      while (i < len && n[j] != 0 && n[j] == s[i++])
        j++;
      if (n[j] == 0)
        return ((char *)s + k);
      i = k;
    }
    i++;
  }
  return (NULL);
}
