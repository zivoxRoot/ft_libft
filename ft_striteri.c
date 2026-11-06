/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:30:36 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 14:08:03 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	my_function(unsigned int n, char *c)
{
	if (n % 2 == 0)
	{
		if (*c > 96 && *c < 123)
			*c -= 32;
		else if (*c > 64 && *c < 91)
			*c += 32;
	}
}

int	main(void)
{
	char	str[] = "Salut je suis cool";
	void 	(*f)(unsigned int, char*) = my_function;
	ft_striteri(str, f);
	printf("%s\n", str);
}
