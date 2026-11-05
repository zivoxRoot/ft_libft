/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:53:43 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/02 12:01:50 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('4'));
// 	printf("%d\n", ft_isalnum('x'));
// 	printf("%d\n", ft_isalnum('o'));
// 	printf("%d\n", ft_isalnum('\n'));
// 	printf("%d\n", ft_isalnum('0'));
// }
