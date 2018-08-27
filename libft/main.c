#include "libft.h"
#include <stdio.h>
int   main(int argc, char **argv)
{
  argc = 1;
  printf("%d", ft_isprint(argv[1][0]));
  return (0);
}
