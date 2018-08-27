#include "libft.h"

char *ft_strstr(const char *s, const char *n)
{
  int i;

  i = 0;
  if (!(n))
    return (s);
  while (*s)
  {
    *s++;
    while (*n)
    {
      *n++;
      if (!(*n))
        return (*s);
    }
  }
  return (NULL);
}
