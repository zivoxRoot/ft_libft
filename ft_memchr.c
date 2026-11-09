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

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	t;

	i = 0;
	p = (unsigned char *)s;
	t = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == t)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
