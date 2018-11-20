#include "libft.h"

int		main(void)
{
	char	*str;

	str = "1981284353";
	printf("atoi: %d\n", atoi(str));
	printf("ftatoi: %d\n", ft_atoi(str));
	return (0);
}

