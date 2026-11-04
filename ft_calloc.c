/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:05:42 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/04 14:23:05 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void	*calloc(size_t nmemb, size_t size)
{
	unsigned long	alloc_size;
	void			*res;
	int				i;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	alloc_size = nmemb * size;
	if (alloc_size > 2147483647)
	{
		printf("Error: value overflows INT MAX\n");
		return (NULL);
	}
	res = malloc(alloc_size);
	i = 0;
	while (i < (int)alloc_size)  // TODO: Use bzero
	{
		res[i] = 0;
	}
	return (res);
}

int	main(void)
{
	int i;
	int * pointer = (int *) calloc(10, sizeof(int) );

	/* Un petit test sur le bon fonctionnement de calloc */
	if (pointer == NULL)
	{
		printf("Error mallocating...\n");
		return 1;
	}

	/* Le dernier élément du tableau ne sera pas affecté par la */
	/* boucle mais n'oubliez pas que calloc initialise de toute */
	/* façon à 0 chaque octet. */
	for ( i=0; i<10-1; i++ ) {
		pointer[i] = i;
	}

	/* On affiche le contenu du tableau d'entier */
	/* Ce qui donne : 0 1 2 3 4 5 6 7 8 0 */
	for (i=0; i<10; i++ ) {
		printf( "%d ", pointer[i] );
	}
	printf( "\n" );

	/* On libère le bloc de mémoire alloué dynamiquement */
	free( pointer );

	return 0;
}
