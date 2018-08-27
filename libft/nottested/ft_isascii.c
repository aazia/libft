#include "libft.h"

int  ft_isascii(int c)
{
  if (c >= ' && c <= 'z')
    {
      c -= 37;
    }
  return (c);
}
