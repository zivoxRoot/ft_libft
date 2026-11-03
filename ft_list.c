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
	t_list	*temp;

	temp = lst;
	while (temp != 
}

// Test function for string-based linked-list
void	ft_printlst(t_list *head)
{
	t_list *temp = head;
	while (temp != NULL)
	{
		printf("%s -> ", (char *)(temp->content));
		temp = temp->next;
	}
	printf("NULL");
}

// Help function that deletes an item
void deleteItem(void *item)
{
	printf("=== DELETING item with value: %d", (char *)(item->content));
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

	// Delete middle item
	printf("--- DELETING MIDDLE ITEM ---\n\n");
	void	(*del)(void *) = deleteItem;
	ft_lstdelone(t, ptr);
}
