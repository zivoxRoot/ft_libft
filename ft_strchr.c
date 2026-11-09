/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:15:10 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/04 12:29:23 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (true)
	{
		if (s[index] == (char)c)
			return ((char *)&(s[index]));
		if (s[index] == '\0')
			break ;
		index++;
	}
	return (NULL);
}
