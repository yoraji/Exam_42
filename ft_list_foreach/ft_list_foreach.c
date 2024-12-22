#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_lstnew(int num)
{
    t_list *head = malloc(sizeof(t_list));
    if (!head)
        return NULL;
    head->data = num;
    head->next = NULL;
    return head;
}

void ft_list_print(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", lst->data);
        lst = lst->next;
    }
    printf("NULL\n");
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(&(begin_list->data));
        begin_list = begin_list->next;
    }
}

void increment_value(void *data)
{
    int *num = (int *)data;
    *num += 10;
}

void print_value(void *data)
{
    int *num = (int *)data;
    printf("%d ", *num);
}

/*
 * ---------------------------| if you would like to test it fuction |------------- 
int main()
	{
		t_list *node = ft_lstnew(290);
		node->next = ft_lstnew(380);
		node->next->next = ft_lstnew(200);
		node->next->next->next = ft_lstnew(125);
		ft_list_print(node);
		ft_list_foreach(node, increment_value);
		ft_list_print(node);
		ft_list_foreach(node, print_value);
		printf("\n");
		return 0;
	}
-----------------------------------------------------------------------------------
*/
