/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:38:15 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/04 11:43:30 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>

size_t	get_size(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = get_size(src);
	if (size == 0)
		return (src_size);
	while (*src && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (*dst)
		dst[i] = '\0';
	return (src_size);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int	main(void)
// {
	// const char		*src = "Bonjour a tous";
	// printf("Starting src: %s\n\n", src);

	// Original
	// char			original_dst[14];
	// size_t			original_size;
	// original_size = strlcpy(original_dst, src, 15);
	// printf("Dst after original strlcpy: %s\n", original_dst);
	// printf("Size of the src original: %zu\n\n", original_size);

	// Mine
	// char			my_own_dst[14];
	// size_t			my_own_size;
	// my_own_size = ft_strlcpy(my_own_dst, src, 15);
	// printf("Dst after my own strlcpy: %s\n", my_own_dst);
	// printf("Size of the src of my own: %zu\n", my_own_size);
// }
