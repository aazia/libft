/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:38:56 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/13 14:39:18 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*rev;
	int		s;
	int		i;
	long	num;

	if (n == 0)
		return (ft_strdup("0"));
	num = n;
	i = 0;
	if (!(rev = ft_strnew(ft_intlen(num))))
		return (NULL);
	s = 0;
	if (num < 0)
	{
		num *= -1;
		s = 1;
	}
	rev[i++] = (num % 10) + '0';
	while (num /= 10)
		rev[i++] = (num % 10) + '0';
	if (s)
		rev[i] = '-';
	ft_strrev(rev);
	return (rev);
}
