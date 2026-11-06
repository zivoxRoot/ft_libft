#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stddef.h>

#include "libft.h"

int	main(void)
{
	printf("\n\n##################################\n");
	printf("### PART 1: standard functions ###\n");
	printf("##################################\n\n");

	// Characters
	printf("### PART 1.1: Character-related functions ###\n");

	printf("\n=== Testing isalpha\n");
	printf("Expect 0: %d\n", ft_isalpha('\n'));
	printf("Expect 1: %d\n", ft_isalpha('x'));
	printf("Expect 0: %d\n", ft_isalpha('!'));
	printf("Expect 1: %d\n", ft_isalpha('R'));

	printf("\n=== Testing isdigit\n");
	printf("Expect 1: %d\n", ft_isdigit('4'));
	printf("Expect 0: %d\n", ft_isdigit('x'));
	printf("Expect 0: %d\n", ft_isdigit('o'));
	printf("Expect 1: %d\n", ft_isdigit('0'));

	printf("\n=== Testing isalnum\n");
	printf("Expect 1: %d\n", ft_isalnum('4'));
	printf("Expect 1: %d\n", ft_isalnum('x'));
	printf("Expect 1: %d\n", ft_isalnum('o'));
	printf("Expect 0: %d\n", ft_isalnum('\n'));
	printf("Expect 1: %d\n", ft_isalnum('0'));

	printf("\n=== Testing isascii\n");
	printf("Expect 1: %d\n", ft_isascii('4'));
	printf("Expect 1: %d\n", ft_isascii('x'));
	printf("Expect 1: %d\n", ft_isascii('o'));
	printf("Expect 1: %d\n", ft_isascii('\n'));
	printf("Expect 1: %d\n", ft_isascii('0'));
	printf("Expect 0: %d\n", ft_isascii(439));

	printf("\n=== Testing isprint\n");
	printf("Expect 0: %d\n", ft_isprint('\n'));
	printf("Expect 1: %d\n", ft_isprint('x'));
	printf("Expect 1: %d\n", ft_isprint('!'));
	printf("Expect 1: %d\n", ft_isprint('R'));

	printf("\n=== Testing toupper\n");
	printf("Expect X: %c\n", ft_toupper('x'));
	printf("Expect A: %c\n", ft_toupper('A'));
	printf("Expect 1: %c\n", ft_toupper('1'));

	printf("\n=== Testing tolower\n");
	printf("Expect x: %c\n", ft_tolower('x'));
	printf("Expect a: %c\n", ft_tolower('A'));
	printf("Expect 1: %c\n", ft_tolower('1'));

	// Part 2: Non-standard functions
	printf("\n\n######################################\n");
	printf("### PART 2: non-standard functions ###\n");
	printf("######################################\n\n");

	printf("\n=== Testing strlen\n");
	printf("Expect 7: %zu\n", ft_strlen("Bonjour"));

	printf("\n=== Testing strlcpy\n");
	{
		const char		*src = "Bonjour a tous";
		printf("Starting src: %s\n\n", src);
		// Original
		char			original_dst[15];
		size_t			original_size;
		original_size = strlcpy(original_dst, src, 15);
		printf("Dst after original strlcpy: %s (size %zu)\n", original_dst, original_size);
		// Mine
		char			my_own_dst[15];
		size_t			my_own_size;
		my_own_size = ft_strlcpy(my_own_dst, src, 15);
		printf("Dst after my own strlcpy: %s (size %zu)\n", my_own_dst, my_own_size);
		// TODO: Try with a truncation (buffer too short)
	}

	printf("\n=== Testing strlcat\n");
	{
		const char	*src = "Bonjour a tous";
		// Original
		char	original_dst[29] = "Premiere parti";
		printf("Original dst before: %s\n", original_dst);
		size_t	original_size = strlcat(original_dst, src, 29);
		printf("Original dst after: %s\n", original_dst);
		printf("Original size: %zu\n", original_size);
		// Mine
		char	mine_dst[29] = "Premiere parti";
		printf("Mine dst before: %s\n", mine_dst);
		size_t	mine_size = ft_strlcat(mine_dst, src, 29);
		printf("Mine dst after: %s\n", mine_dst);
		printf("Mine size: %zu\n", mine_size);
	}

	printf("\n=== Testing strchr\n");
	{
		const char	*str = "Hello everybody";
		char		target = 'l';
		printf("Target string: %s\n\n", str);
		// Original
		printf("Original's fist appearance of character %c: %s\n", target, strchr(str, target));
		// Mine
		printf("Mine's fist appearance of character %c: %s\n", target, ft_strchr(str, target));
	}

	printf("\n=== Testing strrchr\n");
	{
		const char	*str = "Hello everybody";
		char		target = 'e';
		printf("Target string: %s\n\n", str);
		// Original
		printf("Original's last appearance of character %c: %s\n", target, strrchr(str, target));
		// Mine
		printf("Mine's last appearance of character %c: %s\n", target, ft_strrchr(str, target));
	}

	printf("\n=== Testing strncmp\n");
	{
		char	*str1 = "sALUT";
		char	*str2 = "test";
		int		cmp_size = 18;
		// Original
		printf("Original strncmp: %d\n", strncmp(str1, str2, cmp_size));
		// Mine
		printf("My own strncmp: %d\n", ft_strncmp(str1, str2, cmp_size));
	}

	printf("\n=== Testing strnstr\n");
	{
		const char	*big = "Salut je suis le boss";
		const char	*little = "suis";
		// Original
		printf("Original strnstr: %s\n", strnstr(big, little, 30));
		// Mine
		printf("My own strnstr: %s\n", ft_strnstr(big, little, 30));
	}

	printf("\n=== Testing strdup\n");
	{
		const char	*str = "Salut je suis le boss";
		// Original
		char	*original = strdup(str);
		printf("Original strdup: %s\n", original);
		free(original);
		// Mine
		char	*mine = ft_strdup(str);
		printf("My own strdup: %s\n", mine);
		free(mine);
	}
	return (0);
}
