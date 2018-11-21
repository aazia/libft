#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	int		tmp;
	char	*a;

	sign = 0;
	if (n < 0)
		sign = 1;
	tmp = n;
	len = 1;
	while ((tmp /= 10))
		len++;
	a = ft_strnew(len + sign);
	if (a == NULL)
		return (NULL);
	if (sign)
		a[0] = '-';
	while (len--)
	{
		a[len + sign] = (sign ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (a);
}
