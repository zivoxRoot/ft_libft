/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:28:07 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/09 09:40:22 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static int	get_words_nb(char const *s, char c)
{
	int	i;
	int	words_nb;
	int	is_prev_separator;

	i = 0;
	words_nb = 0;
	is_prev_separator = 1;
	while (s[i])
	{
		if (s[i] != c && is_prev_separator)
			words_nb++;
		if (s[i] == c)
			is_prev_separator = 1;
		else
			is_prev_separator = 0;
		i++;
	}
	return (words_nb);
}

static void	free_all(char **res, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static int	fill_words(char **res, char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		res[i] = ft_substr(s, 0, len);
		if (!res[i])
		{
			free_all(res, i);
			return (0);
		}
		i++;
		s += len;
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((get_words_nb(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!fill_words(res, s, c))
		return (NULL);
	return (res);
}
