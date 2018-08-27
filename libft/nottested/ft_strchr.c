#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  if (*s == c)
    return (*s);
  if (*s == '\0' && c != '\0')
    return (NULL);
  else
    ft_strchr(s++, c);
}
