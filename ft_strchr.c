/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:15:10 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/04 12:29:23 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			return ((char *)&(s[index]));
		index++;
	}
	if (c == '\n' && s[index] == '\n')
		return ((char *)&(s[index]));
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char	*str = "Hello everybody";
// 	char		target = 'l';
// 
// 	printf("Target string: %s\n\n", str);
// 	printf("Original's fist appearance of character %c: %s\n", target, strchr(str, target));
// 	printf("Mine's fist appearance of character %c: %s\n", target, ft_strchr(str, target));
// }
