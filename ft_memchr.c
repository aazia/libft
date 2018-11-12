/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkeever <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:58:20 by azkeever          #+#    #+#             */
/*   Updated: 2018/11/12 17:02:36 by azkeever         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = (unsigned char *)s;
	while (ptr[i] != 0)
	{
		if (ptr[i] == ((unsigned char)c))
			return (s[i]);
		i++;
	}
	return (NULL);
}
