#include "libft.h"

char *ft_strstr(const char *s, const char *n)
{
  int i;
  int j;

  i = 0;
  j = 0;
  if (!(n))
    return ((char *)s);
  while (s[j])
  {
    while (n[i] == s[j] && n[i] && s[j])
     {
       i++;
       j++;
     }
     if (n[i] == '\0')
       return ((char *)(s + j - i));
     i = 0;
     j++;
  }
  return (NULL);
}

int   main(int argc, char **argv)
{
  argc = 2;
  ft_putstr(ft_strstr(argv[1], argv[2]));
  ft_putchar('\n');
  ft_putstr(strstr(argv[1], argv[2]));
  return (0);
}
