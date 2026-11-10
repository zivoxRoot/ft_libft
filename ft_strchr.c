/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:15:10 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/10 09:13:19 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (1 == 1)
	{
		if (s[index] == (char)c)
			return ((char *)&(s[index]));
		if (s[index] == '\0')
			break ;
		index++;
	}
	return (NULL);
}
