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
	last_appearance_index = -1;
	while (true)
	{
		if (s[index] == (char)c)
			last_appearance_index = index;
		if (s[index] == '\0')
			break ;
		index++;
	}
	if (last_appearance_index != -1)
		return ((char *)&s[last_appearance_index]);
	return (NULL);
}
