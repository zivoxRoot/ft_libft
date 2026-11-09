/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:25:52 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/04 14:03:36 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (little[0] == '\n')
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			little_i = 0;
			while (little[little_i] == big[i + little_i])
			{
				if (little[little_i + 1] == '\0')
				{
					return ((char *)&big[i]);
				}
				little_i++;
			}
		}
		i++;
	}
	return (NULL);
}
