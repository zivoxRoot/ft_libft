// Test file for linked list
// TODO: extract everything to individual files once it works

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*t;

	t = (t_list *)malloc(sizeof(t_list));
	// Allocation error
	if (!t)
	{
		printf("Error allocating memory\n");
		return (NULL);
	}
	t->content = content;
	t->next = NULL;
	return (t);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list *temp;

	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
}

// TODO: WTF?
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	temp;

	temp = *lst;
	while (temp->next != NULL)
	{
		del(temp->content);
		temp = temp->next;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	temp;

	temp = lst;
	while (temp->next != NULL)
	{
		f((void *)temp->content);
		temp = temp->next;
	}
}

// Help function that deletes the content of an item
void deleteItem(void *item)
{
	t_list	*temp = (t_list *)item;
	printf("=== DELETING item with value: %s\n", (char *)(temp->content));
}

// Test function for string-based linked-list
void	ft_printlst(t_list *head)
{
	t_list *temp = head;
	if (temp = NULL)
	{
		printf("Empty linked list\n");
		return ;
	}
	while (temp != NULL)
	{
		printf("%s -> ", (char *)(temp->content));
		temp = temp->next;
	}
	printf("NULL");
}

// Testing
int	main(void)
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
	printf("--- DELETING LAST ITEM ---\n\n");
	void	(*del)(void *) = deleteItem;
	ft_lstdelone(new, del);
	// NOTE: Is it normal that this operation seems to not work? It doesn't update the pointer of the last item so it seem logical that it crashes on the next print...

	// Clears the list
	printf("--- CLEARS THE LIST ---\n\n");
	ft_lstclear(t, del);

	// Iterate over a list and launch a function on the items' content
	printf("--- ITERATING OVER THE LIST ---\n\n");
	ft_lstiter(t, del);
}
