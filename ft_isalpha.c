/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:30:04 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/02 11:57:42 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_isalpha('\n'));
// 	printf("%d\n", ft_isalpha('x'));
// 	printf("%d\n", ft_isalpha('!'));
// 	printf("%d\n", ft_isalpha('R'));
// }
