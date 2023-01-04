#include <stdio.h>
#include <stdlib.h>
	struct	node
	{
		int value;
		struct node *next;
	};
	typedef struct node t_list;

t_list *ft_lstnew(void *content)
{
	t_list *lsg;
	lsg = (t_list *)malloc(sizeof(t_list));
	lsg->value = *(int *)content;
	lsg->next = NULL;
	return(lsg);
}
void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
		new -> next = *lst;
	*lst = new;
}

t_list *ft_lstlast(t_list *lst)
{
	while(lst != NULL)
	{
		if (lst->next == NULL)
			return(lst);
		lst = lst->next;	
	}
	return 0;
}

void printhem(t_list *head)
{
	t_list	*temp;
	temp = head;
	
	while(temp != NULL)
	{
		printf("%d - ",temp->value);
		temp = temp->next;
	}
	printf("\n");
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	
}
int main()
{	
	t_list	a;
	t_list 	b;
	t_list	c;
	t_list 	f;
	t_list	*head;
	
	a.value = 5;
	b.value = 6;
	c.value = 8;
	f.value = 9;
	a.next = NULL;
	b.next = &a;
	c.next = &b;
	head = &c;
	(void)f;
	printhem(head);
	//ft_lstnew(&(head->value)); //works
	//ft_lstadd_front(&head,&f); //works
	//printhem(ft_lstlast(&a));	//works
	
}





