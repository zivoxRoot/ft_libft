/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:01:26 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 09:36:31 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char		*str = "Salut je suis content";
// 	char		target = 'x';
// 	const void	*s = (const void *)str;
// 	int			c = (int)target;
// 
// 	printf("Original memchr: %s\n", (char *)memchr(s, c, 20));
// 	printf("My own memchr: %s\n", (char *)ft_memchr(s, c, 20));
// }
