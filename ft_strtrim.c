/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:57:32 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 12:22:18 by tdefeche         ###   ########.fr       */
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
// 
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	// Malloc necessary size
// 	char	*res;
// 	unsigned int i;
// 	size_t y;
// 
// 	res = (char *)malloc((len + 1) * sizeof(char));
// 	if (!res)
// 		return (NULL);
// 
// 	// Get to the start of the substring in the string
// 	i = 0;
// 	while (i < start)
// 		i++;
// 
// 	// Copy char by char
// 	y = 0;
// 	while (y < len)
// 	{
// 		res[y] = s[i + y];
// 		y++;
// 	}
// 	res[y] = '\0';
// 	return (res);
// }

int	is_set(char c, char const *set)
{
	int	set_index;

	set_index = 0;
	while (set[set_index])
	{
		if (set[set_index] == c)
			return (1);
		set_index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	while (s1[start])
	{
		if (!is_set(s1[start], set))
			break ;
		start++;
	}
	end = ft_strlen(s1);
	while (s1[end - 1])
	{
		if (!is_set(s1[end - 1], set))
			break ;
		end--;
	}
	return (ft_substr(s1, start, end - start));
}

// int	main(void)
// {
// 	const char	*str = "      2xChaine finale je pense...xx  22";
// 	const char	*set = " x2";
// 	printf("%s\n", ft_strtrim(str, set));
// }
