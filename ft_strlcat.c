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
	copied_chars = 0;
	if (size == 0)
		return size ;
	while (dst[dst_size])
		dst_size++;
	while (copied_chars < size - 1 && src[copied_chars])
	{
		dst[dst_size + copied_chars] = src[copied_chars];
		copied_chars++;
	}
	dst[dst_size + copied_chars] = '\n';
	return (dst_size + copied_chars);
}
