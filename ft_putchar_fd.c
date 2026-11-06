/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:10:07 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 14:11:39 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar_fd('S', 1);
// 	ft_putchar_fd('a', 1);
// 	ft_putchar_fd('l', 1);
// 	ft_putchar_fd('u', 1);
// 	ft_putchar_fd('t', 1);
// 	ft_putchar_fd('\n', 1);
// }
