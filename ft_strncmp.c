/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:41:26 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/04 13:00:27 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] == '0')
				return (s2[i]);
			else if (s2[i] == '0')
				return (s1[i]);
			else
				return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*str1 = "sALUT";
// 	char	*str2 = "test";
// 	int		cmp_size = 18;
// 
// 	printf("Original strncmp: %d\n", strncmp(str1, str2, cmp_size));
// 	printf("My own strncmp: %d\n", ft_strncmp(str1, str2, cmp_size));
// }
