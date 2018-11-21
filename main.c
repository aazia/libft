#include "libft.h"

int		main(void)
{
	char *buf2 = "A";

	printf("strnstr:\n %s\n\n", strnstr(buf2, buf2, 2));
	printf("ft_strnstr:\n %s", ft_strnstr(buf2, buf2, 2));
	return (0);
}
