/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:52:57 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/12 18:28:37 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	/* ft_memset */
	void	*s;
	char	*str;

	str = "hello world";
	s = &str;
	printf("s: %p\n", s);
	s = ft_memset(s, 'a', sizeof(s));
	printf("a: %p\n", (s));
	printf("%s\n", (unsigned char *)s);
	return (0);
}

int		main(void)
{
	// ft_strcat.c
	char s1[50] = "This is an";
	char s2[50] = " example";
	char s3[50] = "this is an";
	char s4[50] = " example";

	printf("str len s1: %d\n", ft_strlen(s1));
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	strcat(s1, s2);
	printf("strcat: %s\n", s1);
	ft_strcat(s3, s4);
	printf("ft_strcat: %s\n", s3);
	return (0);
}
