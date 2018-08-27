#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  int i;

  i = ft_strlen(s);
  if (c == '\0')
    return (&s[i + 1]);
  else if (s[i] == c)
    return (&s[i]);
  else if (*s == '\0' && c != '\0')
    return (NULL);
  else
    ft_strrchr(&s[i--], c);
}
