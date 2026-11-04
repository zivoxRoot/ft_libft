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

// #include <stddef.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	copied_chars;

	dst_size = 0;
	copied_chars = 0;
	// Get dst size
	while (dst[dst_size])
	{
		dst_size++;
	}
	// Append src to dst (copy at most size characters)
	while (copied_chars < size - 1 && src[copied_chars])
	{
		dst[dst_size + copied_chars] = src[copied_chars];
		copied_chars++;
	}
	dst[dst_size + copied_chars] = '\n';
	return (dst_size + copied_chars);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int	main(void)
// {
	// const char	*src = "Bonjour a tous";

	// Original
	// char	original_dst[28] = "Premiere parti";
	// printf("Original dst before: %s\n", original_dst);
	// size_t	original_size = strlcat(original_dst, src, 29);
	// printf("Original dst after: %s\n", original_dst);
	// printf("Original size: %zu\n", original_size);

	// Mine
	// char	mine_dst[28] = "Premiere parti";
	// printf("Mine dst before: %s\n", mine_dst);
	// size_t	mine_size = strlcat(mine_dst, src, 29);
	// printf("Mine dst after: %s\n", mine_dst);
	// printf("Mine size: %zu\n", mine_size);
// }
