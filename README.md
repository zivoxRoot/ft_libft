# Libft

*This project has been created as part of 42 curriculum by tdefeche.*

## Description

This C library is a rebuild of some functions from different standard C libraries. They are meant to behave exactly the same as their counterpart and be used to build other projects later in the curriculum.

> [!NOTE]
> All functions start with `ft_` before their name, so you will find them in the corresponding `ft_{function name}.c` file

<details>
<summary>These functions can be stored in different categories:</summary>

### Libc functions

**Characters-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|isalpha           |Verify if a character is alphabetical [a-zA-Z]         |
|isdigit           |Verify if a character is a digit [0-9]                |
|isalnum           |The combination of the two previous functions         |
|isascii           |Verify if a character is part of the ascii table      |
|isprint           |Verify is a character is printable                    |
|toupper           |Put a lowercase character in uppercase                |
|tolower           |Put an uppercase character in lowercase               |

**String-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|strlen            |Returns the length of a string                        |
|strlcpy           |Copies a string into a buffer                         |
|strlcat           |Concatenate a string into another one                 |
|strchr            |Returns the first occurance of a character in a string|
|strrchr           |Returns the last occurance of a character in a string |
|strncmp           |Compare two strings                                   |
|strdup            |Returns a duplicate of a string                       |

**Memory-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|memset            |Fills a memory area with a constant byte              |
|bzero             |Fills a memory area with 0s                           |
|memcpy            |Copies a memory areainto another one                  |
|memmove           |Same as memcpy but handles overlapping memory areas   |
|memcmp            |Compare two memory areas                              |
|calloc            |The `calloc` function: allocate a memory area with 0s |

**Other functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|atoi              |convert an int to a string                            |

### Additional functions

<!-- TODO: add them and the linked list -->

**Characters-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|isalpha           |Verify if a character is alphabetical [az-AZ]         |
|isdigit           |Verify if a character is a digit [0-9]                |

### Linked list

**Characters-related functions**
|Function          |Goal                                                  |
|------------------|------------------------------------------------------|
|isalpha           |Verify if a character is alphabetical [az-AZ]         |
|isdigit           |Verify if a character is a digit [0-9]                |
</details>

## Instructions

> For instructions on how to evaluate or test this project, refer to the [testing section](#testing).

To use this library you must first clone the repository:
```bash
git clone --depth=1 https://github.com/zivoxRoot/ft_libft.git $HOME/ft_libft
cd $HOME/ft_libft
```

Then build the library locally:
```bash
make
```

Now you can import the `libft.h` file and compile with the generated `libft.a`:

```clang
#include <stdio.h>

#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_itoa(42));
}
```

```bash
cc -Wall -Wextra -Werror -g main.c -L. -lft -lbsd -o test
```

- `-Wall -Wextra -Werror`: flags for more/clearer error messages
- `-g`: allows debugging with `gdb` if there is a bug after compiling
- `-L`: path to `libft.a`
- `-l`: the name of the library without the prefix `lib` so `ft` in our case
- `-lbsd` access to lbsd functions (optional, if needed)

## Ressources

## Testing

You can easily test this library by copying the following `main.c` and following the instructions in the [instructions section](#instructions).

<details>
<summary>`main.c`</summary>
```clang
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stddef.h>
#include <stdlib.h>

#include "libft.h"

int	main(void)
{
	printf("\n##################################\n");
	printf("### PART 1: standard functions ###\n");
	printf("##################################\n");

	// Characters
	printf("\n### PART 1.1: Character-related functions ###\n");

	printf("\n=== Testing isalpha\n");
	{
		printf("Expect 0: %d\n", ft_isalpha('\n'));
		printf("Expect 1: %d\n", ft_isalpha('x'));
		printf("Expect 0: %d\n", ft_isalpha('!'));
		printf("Expect 1: %d\n", ft_isalpha('R'));
	}

	printf("\n=== Testing isdigit\n");
	{
		printf("Expect 1: %d\n", ft_isdigit('4'));
		printf("Expect 0: %d\n", ft_isdigit('x'));
		printf("Expect 0: %d\n", ft_isdigit('o'));
		printf("Expect 1: %d\n", ft_isdigit('0'));
	}

	printf("\n=== Testing isalnum\n");
	{
		printf("Expect 1: %d\n", ft_isalnum('4'));
		printf("Expect 1: %d\n", ft_isalnum('x'));
		printf("Expect 1: %d\n", ft_isalnum('o'));
		printf("Expect 0: %d\n", ft_isalnum('\n'));
		printf("Expect 1: %d\n", ft_isalnum('0'));
	}

	printf("\n=== Testing isascii\n");
	{
		printf("Expect 1: %d\n", ft_isascii('4'));
		printf("Expect 1: %d\n", ft_isascii('x'));
		printf("Expect 1: %d\n", ft_isascii('o'));
		printf("Expect 1: %d\n", ft_isascii('\n'));
		printf("Expect 1: %d\n", ft_isascii('0'));
		printf("Expect 0: %d\n", ft_isascii(439));
	}

	printf("\n=== Testing isprint\n");
	{
		printf("Expect 0: %d\n", ft_isprint('\n'));
		printf("Expect 1: %d\n", ft_isprint('x'));
		printf("Expect 1: %d\n", ft_isprint('!'));
		printf("Expect 1: %d\n", ft_isprint('R'));
	}

	printf("\n=== Testing toupper\n");
	{
		printf("Expect X: %c\n", ft_toupper('x'));
		printf("Expect A: %c\n", ft_toupper('A'));
		printf("Expect 1: %c\n", ft_toupper('1'));
	}

	printf("\n=== Testing tolower\n");
	{
		printf("Expect x: %c\n", ft_tolower('x'));
		printf("Expect a: %c\n", ft_tolower('A'));
		printf("Expect 1: %c\n", ft_tolower('1'));
	}

	// Strings
	printf("\n### PART 1.2: String-related functions ###\n");

	printf("\n=== Testing strlen\n");
	{
		printf("Expect 7: %zu\n", ft_strlen("Bonjour"));
	}

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

	// Memory
	printf("\n### PART 1.3: Memory-related functions ###\n");

	printf("\n=== Testing memset\n");
	{
		int		array[] = { 54, 85, 20, 63, 21 };
		size_t	size = sizeof(int) * 5;
		int		length = 0;

		printf("Array before memset: ");
		while (length < 5)
		{
			printf("%d ", array[length]);
			length++;
		}
		printf("\n");

		ft_memset(array, 0, size);
		length = 0;
		printf("Array after memset (expec only 0s): ");
		while (length < 5)
		{
			printf("%d ", array[length]);
			length++;
		}
		printf("\n");
	}

	printf("\n=== Testing bzero\n");
	{
		int		array[] = { 54, 85, 20, 63, 21 };
		size_t	size = sizeof(int) * 5;
		int		length;

		length = 0;
		printf("Array before bzero: ");
		while (length < 5)
		{
			printf("%d ", array[length]);
			length++;
		}
		printf("\n");

		ft_bzero(array, size);
		// TODO: Bugfix it doesn't set the last item to 0

		length = 0;
		printf("Array after bzero (expec only 0s): ");
		while (length < 5)
		{
			length++;
			printf("%d ", array[length]);
		}
		printf("\n");
	}

	printf("\n=== Testing memcpy\n");
	{
		int	array1[] = {1, 2, 3, 4, 5};
		int	array2[] = {12, 23, 34, 45, 56};
		size_t size = 3 * sizeof(int);

		int length = 0;
		printf("First array: ");
		while (length < 5)
		{
			printf("%d ", array1[length]);
			length++;
		}
		printf("\n");
		length = 0;
		printf("Second array: ");
		while (length < 5)
		{
			printf("%d ", array2[length]);
			length++;
		}
		printf("\n");

		// TODO: bugfix copying doesn't work well
		printf("\nCOPYING 3 items from first array to second array\n\n");
		ft_memcpy((void *)array2, (const void *)array1, size);

		length = 0;
		printf("First array: ");
		while (length < 5)
		{
			printf("%d ", array1[length]);
			length++;
		}
		printf("\n");
		length = 0;
		printf("Second array: ");
		while (length < 5)
		{
			printf("%d ", array2[length]);
			length++;
		}
		printf("\n");
	}

	printf("\n=== Testing memmove\n");
	// TODO: Make this function work and copy it here

	printf("\n=== Testing memchr\n");
	{
		char		*str = "Salut je suis content";
		char		target = 'u';
		const void	*s = (const void *)str;
		int			c = (int)target;

		printf("Original memchr: %s\n", (char *)memchr(s, c, 20));
		printf("My own memchr: %s\n", (char *)ft_memchr(s, c, 20));
	}

	printf("\n=== Testing memcmp\n");
	{
		char		*str1 = "Salut je suis le boss";
		char		*str2 = "test salut";
		const void	*s1 = (const void *)str1;
		const void	*s2 = (const void *)str2;

		printf("Original memcmp: %d\n", memcmp(s1, s2, 40));
		printf("My own memcmp: %d\n", ft_memcmp(s1, s2, 40));
	}

	printf("\n=== Testing calloc\n");
	{
		int	i = 0;
		int	*pointer = (int *)ft_calloc(10, sizeof(int));
		// TODO: For the evaluator, try with the original to compare

		// Check allocation errors
		if (!pointer)
		{
			printf("Error mallocating...\n");
			return 1;
		}

		// We don't set the last item of the array, but calloc sets its at 0
		while (i < 9)
		{
			pointer[i] = i;
			i++;
		}

		// We print the whole array
		printf("Printing array, expected: 1 to 8 and a 0 at the end\n");
		i = 0;
		while (i < 10)
		{
			printf("%d ", pointer[i]);
			i++;
		}
		printf("\n");

		free(pointer);
	}

	// Other
	printf("\n### PART 1.4: Other functions ###\n");

	printf("\n=== Testing atoi\n");
	{
		const char	*str = "   +--213+4433";
		printf("%d\n", ft_atoi(str));
	}

	// Part 2: Additional functions
	printf("\n######################################\n");
	printf("### PART 2: Additional functions ###\n");
	printf("######################################\n");

	return (0);
}
```
</details>
