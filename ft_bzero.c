/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:39:07 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/02 14:42:21 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)s = '\0';
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	char	*str = "Bonjour";
	printf("Before: %s\n", str);
	bzero(str, 3);
	printf("After: %s\n", str);
}
