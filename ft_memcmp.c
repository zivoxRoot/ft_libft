/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:14:51 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 09:36:36 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] == '0')
				return (str2[i]);
			else if (str2[i] == '0')
				return (str1[i]);
			else
				return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char		*str1 = "Salut je suis le boss";
// 	char		*str2 = "test salut";
// 	const void	*s1 = (const void *)str1;
// 	const void	*s2 = (const void *)str2;
// 
// 	printf("Original memcmp: %d\n", memcmp(s1, s2, 40));
// 	printf("My own memcmp: %d\n", ft_memcmp(s1, s2, 40));
// }
