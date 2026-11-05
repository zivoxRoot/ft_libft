#include <stdlib.h>
// #include <stddef.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;
// 
// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*res;
	size_t	i;

	size = ft_strlen(s) + 1;
	res = (char *)malloc(size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\n';
	return (res);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char	*str = "Salut je suis le boss";
// 
// 	char	*original = strdup(str);
// 	printf("Original strdup: %s\n", original);
// 	free(original);
// 
// 	char	*mine = ft_strdup(str);
// 	printf("My own strdup: %s\n", mine);
// 	free(mine);
// }
