/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefeche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:05:42 by tdefeche          #+#    #+#             */
/*   Updated: 2026/11/06 09:34:12 by tdefeche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (nmemb > 2147483647 / size)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	ft_bzero(res, nmemb * size);
	return (res);
}

// int	main(void)
// {
	// int i;
	// int * pointer = (int *) calloc(10, sizeof(int) );
	// int * pointer = (int *) ft_calloc(10, sizeof(int) );

	/* Un petit test sur le bon fonctionnement de calloc */
	// if (pointer == NULL)
	// {
	// 	printf("Error mallocating...\n");
	// 	return 1;
	// }

	/* Le dernier élément du tableau ne sera pas affecté par la */
	/* boucle mais n'oubliez pas que calloc initialise de toute */
	/* façon à 0 chaque octet. */
	// for ( i=0; i<10-1; i++ ) {
	// 	pointer[i] = i;
	// }

	/* On affiche le contenu du tableau d'entier */
	/* Ce qui donne : 0 1 2 3 4 5 6 7 8 0 */
	// for (i=0; i<10; i++ ) {
	// 	printf( "%d ", pointer[i] );
	// }
	// printf( "\n" );

	/* On libère le bloc de mémoire alloué dynamiquement */
	// free( pointer );

	// return 0;
// }
