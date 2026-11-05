#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

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
		return (NULL);
	}
	t->content = content;
	t->next = NULL;
	return (t);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list *temp;

	i = 0;
	temp = lst;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current_last;

	// Empty
	if (!lst || !new)
		return ;
	// List has no node
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	// Otherwise add note at the back
	current_last = ft_lstlast(*lst);
	current_last->next = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*next;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		del(temp->content);
		next = temp->next;
		free(temp);
		temp = next;
	}
	*lst = NULL;
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	temp = lst;
	while (temp)
	{
		content = f(temp->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		temp = temp->next;
	}
	return (new_list);
}

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
