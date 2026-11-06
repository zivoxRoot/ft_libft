/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:22:59 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 13:17:16 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;
// 
// 	i = 0;
// 	while (s[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

char	*reverse_str(char *s)
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

int	get_nb_size(int n)
{
	int	nb_size;

	nb_size = 0;
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

void	complete(int n, int sign, char *res)
{
	int		i;

	i = 0;
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
	int		tmp;
	int		nb_size;
	char	*res;
	int		sign;

	tmp = n;
	sign = 1;
	if (n == -2147483648)
		return ("-2147483648");
	nb_size = get_nb_size(n);
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	res = (char *)malloc((nb_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	complete(n, sign, res);
	return (reverse_str(res));
}

// int	main(void)
// {
// 	int	number = -3290390;
// 	printf("%s\n", ft_itoa(number));
// }
