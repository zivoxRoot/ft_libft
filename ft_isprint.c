/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:46:03 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/02 12:48:12 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("%d\n", ft_isprint('x'));
// 	printf("%d\n", ft_isprint('!'));
// 	printf("%d\n", ft_isprint('R'));
// }
