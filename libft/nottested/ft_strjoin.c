#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
  char *str;
  int i;

  i = 0;
  str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
  while (s1)
    *str++ = *s1++;
  while (s2[i])
  {
    str[i] = s2[i];
    i++;
  }
  str[i] == '\0';
  return (str);
}
//MUST RETURN NULL IF BROKEN
