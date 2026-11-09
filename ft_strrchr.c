/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:30:53 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/04 12:40:10 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;
	int	last_appearance_index;

	index = 0;
	last_appearance_index = 0;
	while (s[index])
	{
		if (s[index] == c)
			last_appearance_index = index;
		index++;
	}
	if (last_appearance_index != 0)
		return ((char *)&s[last_appearance_index]);
	if (c == '\n' && s[index] == '\n')
		return ((char *)&s[index]);
	return (NULL);
}
