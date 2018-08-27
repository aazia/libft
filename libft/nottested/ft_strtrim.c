#include "libft.h"

char    *ft_strtrim(char const *s)
{
  char *r;
  int   i;
  int   j;

  i = 0;
  j = 0;
  r = (char *)malloc(sizeof(char) * ft_strlen(s));
  while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
    s[i++];
  while (s[i])
    r[j++] = s[i++];
  while (r[j] == ' ' || r[j] == '\t' || r[j] == '\n')
  {
    r[j--] = '\0';
  }
  return (r);
}

//NEEDS TO RETURN NULL IF BROKEN
