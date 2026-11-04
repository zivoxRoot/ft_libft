/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:39:07 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/03 09:17:19 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		*p = (unsigned char)c;
		p++;
		i++;
	}
	return (s);
}

void	ft_bezero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		array[] = { 54, 85, 20, 63, 21 };
// 	size_t	size = sizeof(int) * 5;
// 	int		length;
// 
// 	length = 0;
// 	while (length < 5)
// 	{
// 		printf("%d ", array[length]);
// 		length++;
// 	}
// 	printf("\n");
// 
// 	ft_bezero(array, size);
// 
// 	length = 0;
// 	while (length < 5)
// 	{
// 		printf("%d ", array[length]);
// 		length++;
// 	}
// 	printf("\n");
// }
