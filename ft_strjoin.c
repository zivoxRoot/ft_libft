/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:35:12 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 10:56:57 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		size_s1;
	int		size_s2;
	char	*res;

	size_s1 = 0;
	size_s2 = 0;
	while (s1[size_s1])
		size_s1++;
	while (s2[size_s2])
		size_s2++;
	res = (char *)malloc((size_s1 + size_s1 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < size_s1)
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size_s2)
	{
		res[i + size_s1] = s2[i];
		i++;
	}
	res[size_s1 + i] = '\0';
	return (res);
}
// TODO: this function is three line too big

#include <stdio.h>
int	main(void)
{
	const char *s1 = "Salut je suis sympa...";
	const char *s2 = " Et j'aime les pommes";

	printf("%s\n", ft_strjoin(s1, s2));
}
