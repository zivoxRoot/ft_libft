/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:18:12 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 14:22:34 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	temp;

	number = (long)n;
	if (number < 0)
	{
		number *= -1;
		write(fd, "-", 1);
	}
	temp = number % 10 + 48;
	if (number > 9)
		ft_putnbr_fd((int)(number /= 10), fd);
	write(fd, &temp, 1);
}
