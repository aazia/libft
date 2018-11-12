/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:07:06 by azkeever          #+#    #+#             */
/*   Updated: 2018/10/31 14:10:24 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *	ft_strnew(size_t size)
{
	char *new_string;

	new_string = (char *)malloc(sizeof(char *) * size + 1);
	ft_bzero(new_string);
}
