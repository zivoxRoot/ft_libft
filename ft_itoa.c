/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:22:59 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/09 09:37:40 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static char	*reverse_str(char *s)
{
	char	tmp;
	int		arrow_left;
	int		arrow_right;

	arrow_left = 0;
	arrow_right = ft_strlen(s) - 1;
	while (arrow_left < arrow_right)
	{
		tmp = s[arrow_left];
		s[arrow_left] = s[arrow_right];
		s[arrow_right] = tmp;
		arrow_left++;
		arrow_right--;
	}
	return (s);
}

static int	get_nb_size(long n)
{
	int	nb_size;

	nb_size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		nb_size++;
	}
	while (n > 0)
	{
		n /= 10;
		nb_size++;
	}
	return (nb_size);
}

static void	complete(long n, int sign, char *res)
{
	int		i;

	i = 0;
	if (n == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return ;
	}
	while (n > 0)
	{
		res[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	if (sign == -1)
	{
		res[i] = '-';
		i++;
	}
	res[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		nb_size;
	char	*res;
	int		sign;
	long	number;

	sign = 1;
	number = (long)n;
	nb_size = get_nb_size(number);
	if (number < 0)
	{
		sign = -1;
		number = -number;
	}
	res = (char *)malloc((nb_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	complete(number, sign, res);
	return (reverse_str(res));
}
