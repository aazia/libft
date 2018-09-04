/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 21:47:58 by azkeever          #+#    #+#             */
/*   Updated: 2018/08/26 23:46:42 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
  int   i;

  i = ft_strlen(s);
  ft_putchar(i);
  if (!(c) || (*s == '\0' && c != '\0'))
    return (NULL);
  while (i >= 0)
  {
    ft_putchar(s[i]);
    if (s[i] == c)
      return ((char *)s);
    i--;
    s++;
  }
  return (NULL);
}

int   main(int argc, char **argv)
{
  argc = 2;
  ft_putstr(ft_strrchr(argv[1], argv[2][0]));
  return (0);
}
