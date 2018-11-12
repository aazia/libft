/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:04:49 by azkeever          #+#    #+#             */
/*   Updated: 2018/10/31 13:56:23 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd(214748364);
		ft_putchar_fd('8');
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10);
		ft_putchar_fd(nb % 10 + '0');
	}
	else
		ft_putchar_fd(nb + '0');
}
