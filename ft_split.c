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

static int	get_nb_words(char const *s, char c)
{
	int	res;
	int	i;

	res = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			res++;
		i++;
	}
	return (res);
}

static void	fill_words(char **buffer, char const *s, char c)
{
	int	i;
	int	word_counter;
	int	start;
	int	end;
	
	i = 0;
	word_counter = 0;
	start = 0;
	end = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			end = i;
			buffer[word_counter] = ft_strdup(ft_substr(s, start, end));
			word_counter++;
			start = i;
		}
		i++;
	}
	buffer[word_counter] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = (char **)malloc((get_nb_words(s, c) + 1) * sizeof(char *));
	fill_words(res, s, c);
	return (res);
}
