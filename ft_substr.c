/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:15:18 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/02 15:33:01 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stddef.h>
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int 	i;
	unsigned int 	size;
	char	*sub;

	i = 0;
	size = 0;
	// Get to the start
	while (i < start)
	{
		i++;
	}
	// Get length of substring
	while (s[size] && size < len)
	{
		size++;
	}

	// Allocate size
	sub = (char *)malloc(sizeof(char) * size);

	// Copy
	while (s[i] && i < size)
	{
		sub[i - size] = s[i];
		i++;
	}

	printf("-- %s\n", sub);

	return (sub);
}

int	main(void)
{
	char *const str = "Salut tout le monde";
	printf("Original: %s\n", str);
	printf("Substring: %s\n", ft_substr(str, 6, 4));
}
