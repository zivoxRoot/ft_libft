/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:39:39 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/03 11:30:36 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	d += n;
	s += n;
	while (n > 0)
	{
		*d = *s;
		d--;
		s--;
		n--;
	}
	return (dest);
}

#include <string.h>
int	main(void)
{
	int	data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

	// Print the array
	int	i = 0;
	while (i < 10)
	{
		printf("%d ", data[i]);
		i++;
	}
	printf("\n");

	// printf("DELTE\n");
	// int *data2 = data + 1;
	// i = 0;
	// while (i < 10)
	// {
	// 	printf("%d ", data2[i]);
	// 	i++;
	// }
	// printf("\nDELTE\n");

	void	*src = (void *)data;
	void	*dst = (void *) (data + 1);  // We shift the destination by one
	size_t	size = 10 * sizeof(int);
	// memmove(dst, src, size);
	ft_memmove(dst, src, size);

	// We insert a '10' in the first place
	data[0] = 10;

	// Print the array
	i = 0;
	while (i < 10)
	{
		printf("%d ", data[i]);
		i++;
	}
	printf("\n");
}
