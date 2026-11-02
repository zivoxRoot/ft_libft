/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:49:48 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/02 11:53:01 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('4'));
// 	printf("%d\n", ft_isdigit('x'));
// 	printf("%d\n", ft_isdigit('o'));
// 	printf("%d\n", ft_isdigit('0'));
// }
