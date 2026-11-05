/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:23:57 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/02 12:27:00 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c > 127 || c < 0)
	{
		return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isascii('4'));
// 	printf("%d\n", ft_isascii('x'));
// 	printf("%d\n", ft_isascii('o'));
// 	printf("%d\n", ft_isascii('\n'));
// 	printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", ft_isascii(439));
// }
