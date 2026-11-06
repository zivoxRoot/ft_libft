/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:28:07 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 12:21:11 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

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
// 
// size_t	get_size(const char *str)
// {
// 	size_t	i;
// 
// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }
// 
// size_t ft_strlcpy(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	src_size;
// 
// 	i = 0;
// 	src_size = get_size(src);
// 	if (size == 0)
// 		return (src_size);
// 	while (*src && i < size - 1)
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	if (*dst)
// 		dst[i] = '\0';
// 	return (src_size);
// }
// 
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

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	char	**res;

	// Get number of substring
	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	// Malloc it
	res = (char **)malloc((count + 1) * sizeof(char *));
	// Malloc each string & copy it
	i = 0;
	unsigned int start = 0;
	unsigned int end = 0;
	int	cur_count = 0;
	while (s[i] && cur_count < count)
	{
		if (s[i] == c)
		{
			res[count] = (char *)malloc((end - start + 1) * sizeof(char));
			ft_strlcpy(res[count], (const char *)ft_substr(s, start, end), (size_t)(end - start));
			start = end;
			count++;
		}
		i++;
		end++;
	}
	res[count] = NULL;
	return (res);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = "Salut, je suis, content d'extre la.";
// 	char	sep = ',';
// 	char	**res;
// 
// 	res = ft_split(str, sep);
// 	int i = 0;
// 	while (res[i])
// 	{
// 		printf("- %s\n", res[i]);
// 		i++;
// 	}
// 	free(res);
// }
