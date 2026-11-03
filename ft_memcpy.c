/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:18:51 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/03 09:34:49 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	array1[] = {1, 2, 3, 4, 5};
// 	int	array2[] = {12, 23, 34, 45, 56};
// 	size_t size = 3 * sizeof(int);
// 
// 	int length = 0;
// 	printf("First array: ");
// 	while (length < 5)
// 	{
// 		printf("%d ", array1[length]);
// 		length++;
// 	}
// 	printf("\n");
// 	length = 0;
// 	printf("Second array: ");
// 	while (length < 5)
// 	{
// 		printf("%d ", array2[length]);
// 		length++;
// 	}
// 	printf("\n");
// 
// 	printf("\n== COPYING 3 items from first array to second array ==\n\n");
// 	ft_memcpy((void *)array2, (const void *)array1, size);
// 
// 	length = 0;
// 	printf("First array: ");
// 	while (length < 5)
// 	{
// 		printf("%d ", array1[length]);
// 		length++;
// 	}
// 	printf("\n");
// 	length = 0;
// 	printf("Second array: ");
// 	while (length < 5)
// 	{
// 		printf("%d ", array2[length]);
// 		length++;
// 	}
// 	printf("\n");
// }
