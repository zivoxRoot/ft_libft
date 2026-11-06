/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:15:18 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 12:20:41 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	unsigned int i;
	size_t y;

	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < start)
		i++;
	y = 0;
	while (y < len)
	{
		res[y] = s[i + y];
		y++;
	}
	res[y] = '\0';
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *const str = "Salut tout le monde";
// 	printf("Original: %s\n", str);
// 	printf("Substring: %s\n", ft_substr(str, 6, 4));
// }
