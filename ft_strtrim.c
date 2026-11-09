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

#include "libft.h"

static int	is_set(char c, char const *set)
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
