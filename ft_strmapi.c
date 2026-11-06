/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:17:47 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 13:28:48 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	my_function(unsigned int n, char c)
{
	if (n % 2 == 0)
	{
		if (c > 96 && c < 123)
			return (c - 32);
		if (c > 64 && c < 91)
			return (c + 32);
	}
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int					str_size;
	char				*res;
	unsigned int		i;

	str_size = ft_strlen(s);
	res = (char *)malloc((str_size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = "Salut je suis cool";
// 	char 	(*f)(unsigned int, char) = my_function;
// 	printf("%s\n", ft_strmapi(str, f));
// }
