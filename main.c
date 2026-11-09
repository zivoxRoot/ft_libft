#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#include "libft.h"

// NOTE: Used by strmapi & striteri
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

char	my_mapi(unsigned int i, char c)
{
	if (n % 2 == 0)
	{
		if (c > 96 && c < 123)
			return (c -= 32);
		else if (c > 64 && c < 91)
			return (c += 32);
	}
}

// START: linked list related helpers

// Help function that deletes the content of an item
void deleteContent(void *item)
{
	printf("=== DELETING item with value: %s\n", (char *)item);
}

// Test function for string-based linked-list
void	ft_printlst(t_list *head)
{
	t_list *temp = head;
	if (temp == NULL)
	{
		printf("Empty linked list\n");
		return ;
	}
	while (temp)
	{
		printf("%s -> ", (char *)(temp->content));
		temp = temp->next;
	}
	printf("NULL");
}

// Test function for iteration
void	uselessFunction(void *item)
{
	printf("Someone sent me: %s\n", (char *)item);
}

void	*myFunction(void *item)
{
	return (strdup((char *)item));
}
// END: linked list

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

		printf("\nCOPYING 3 items from first array to second array (expect 1 2 3 45 56)\n\n");
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
	{
		char	buf[] = "ABCDEF";
		ft_memmove(buf + 2, buf, 4);
		printf("Expected: ABABCD\n");
		printf("%s\n", buf);

		char	buf2[] = "ABCDEF";
		ft_memmove(buf2, buf2 + 2, 4);
		printf("Expected: CDEFEF\n");
		printf("%s\n", buf2);
	}

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
		printf("Printing array, expected: 0 to 8 and a 0 at the end\n");
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
		printf("Original: %d\n", atoi(str));
		printf("Mine: %d\n", ft_atoi(str));
	}

	// Part 2: Additional functions
	printf("\n######################################\n");
	printf("### PART 2: Additional functions ###\n");
	printf("######################################\n");

	printf("\n=== Testing substr\n");
	{
		char const	*str = "Salut tout le monde";
		printf("Original: %s\n", str);
		char	*res = ft_substr(str, 6, 4);
		printf("Substring: %s\n", res);
		free(res);
	}

	printf("\n=== Testing strjoin\n");
	{
		const char *s1 = "Salut je suis sympa...";
		const char *s2 = " Et j'aime les pommes";
		char	*res = ft_strjoin(s1, s2);
		printf("Expect: Salut je suis sympa... Et j'aime les pommes\n%s\n", res);
		free(res);
	}

	printf("\n=== Testing strtrim\n");
	{
		const char	*str = "      2xChaine finale je pense...xx  22";
		const char	*set = " x2";
		char	*res = ft_strtrim(str, set);
		printf("%s\n", res);
		free(res);
	}

	printf("\n=== Testing split\n");
	{
		char	*str = "Salut, je suis, content d'extre la.";
		char	sep = ',';
		char	**res;
		res = ft_split(str, sep);
		if (res == NULL)
			return 1;
		int i = 0;
		while (res[i])
		{
			printf("- %s\n", res[i]);
			free(res[i]);
			i++;
		}
		free(res);
	}

	printf("\n=== Testing itoa\n");
	{
		int	number = -3290390;
		char	*res = ft_itoa(number);
		printf("%s\n", );
		free(res);
	}

	printf("\n=== Testing strmapi\n");
	{
		char	*str = "Salut je suis cool";
		char 	(*f)(unsigned int, char) = my_mapi;
		char	*res = ft_strmapi(str, f);
		printf("%s\n", res);
		free(res);
	}

	printf("\n=== Testing striteri\n");
	{
		char	str[] = "Salut je suis cool";
		void 	(*f)(unsigned int, char*) = my_function;
		ft_striteri(str, f);
		printf("%s\n", str);
	}

	printf("\n=== Testing putchar fd\n");
	{
		ft_putchar_fd('S', 1);
		ft_putchar_fd('a', 1);
		ft_putchar_fd('l', 1);
		ft_putchar_fd('u', 1);
		ft_putchar_fd('t', 1);
		ft_putchar_fd('\n', 1);
	}

	printf("\n=== Testing putstr fd\n");
	{
		ft_putstr_fd("Salut comment ca va ?\n", 1);
	}

	printf("\n=== Testing putendl fd\n");
	{
		ft_putendl_fd("Salut comment ca va ?", 1);
	}

	printf("\n=== Testing putnbr fd\n");
	{
		ft_putnbr_fd(4329049, 1);
		write(1, "\n", 1);
	}
	// Part 3: Linked list
	printf("\n#########################\n");
	printf("### PART 3: Linked list ###\n");
	printf("###########################\n");

	{
		char	*txt = "Salut";
		void	*value = (void *)txt;
		t_list	*t = ft_lstnew(value);

		// Print list
		printf("=== Before adding\n");
		ft_printlst(t);
		printf("\n\n");

		// List size
		printf("List size: %u\n\n", ft_lstsize(t));

		// Last item
		printf("Last items: ");
		ft_printlst(ft_lstlast(t));
		printf("\n\n");

		// Create new item & add it in front
		char *newTxt = "New item!";
		value = (void *)newTxt;
		t_list	*new = ft_lstnew(value);
		ft_lstadd_front(&t, new);

		// Reprint
		printf("=== After adding\n");
		ft_printlst(t);
		printf("\n\n");

		// List size
		printf("List size: %u\n\n", ft_lstsize(t));

		// Last item
		printf("Last items: ");
		ft_printlst(ft_lstlast(t));
		printf("\n\n");

		// Create new item & add it in back
		printf("--- ADDING NEW ITEM AT THE BACK ---\n\n");
		newTxt = "Should be last item...";
		value = (void *)newTxt;
		new = ft_lstnew(value);
		ft_lstadd_back(&t, new);

		// Reprint
		printf("=== After adding\n");
		ft_printlst(t);
		printf("\n\n");

		// List size
		printf("List size: %u\n\n", ft_lstsize(t));

		// Last item
		printf("Last items: ");
		ft_printlst(ft_lstlast(t));
		printf("\n\n");

		// Delete last item
		void	(*del)(void *) = deleteContent;

		// NOTE: either if deleting items, no operations can be performed after because deletion doesn't handle pointers to the deleted item...
		// printf("--- DELETING LAST ITEM ---\n\n");
		// ft_lstdelone(new, del);

		// Clears the list
		// printf("--- CLEARING THE LIST ---\n\n");
		// ft_lstclear(&t, del);

		// Iterate over a list and launch a function on the items' content
		// printf("--- ITERATING OVER THE LIST ---\n\n");
		// void	(*f)(void *) = uselessFunction;
		// ft_lstiter(t, f);

		// Mapping over a list and launch a function on the items' content
		printf("--- MAPPING OVER THE LIST ---\n\n");
		void	*(*f)(void *) = myFunction;
		t_list	*mapped = ft_lstmap(t, f, del);
		printf("--- MAPPED OVER ---\n");
		ft_lstclear(&t, del);
		ft_printlst(mapped);
		ft_lstclear(&mapped, free);
	}
	return (0);
}
