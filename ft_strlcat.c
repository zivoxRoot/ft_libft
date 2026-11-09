/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 11:44:16 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/04 11:58:10 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	copied_chars;

	dst_size = 0;
	while (dst_size < size && dst[dst_size])
		dst_size++;
	if (dst_size == size)
		return (size + ft_strlen(src));
	copied_chars = 0;
	while (copied_chars < size - dst_size - 1 && src[copied_chars])
	{
		dst[dst_size + copied_chars] = src[copied_chars];
		copied_chars++;
	}
	dst[dst_size + copied_chars] = '\0';
	return (dst_size + ft_strlen(src));
}
