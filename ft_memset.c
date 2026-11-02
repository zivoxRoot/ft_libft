/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:52:53 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/02 13:50:28 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		i++;
	}

	return (s);
}

#include <stdio.h>
int	main(void)
{
	int	array[] = { 54, 85, 20, 63, 21 };
	size_t	size = sizeof(int) * 5;
	int length;

	length = 0;
	while (length < 5)
	{
		printf("%d ", array[length]);
	}
	printf("\n");

	ft_memset(array, 0, 5);

	length = 0;
	while (length < 5)
	{
		printf("%d ", array[length]);
	}
	printf("\n");
}
