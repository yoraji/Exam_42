#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_list
{
    int data;
    struct s_list *next;
} t_list;

int ascending(int a, int b)
{
    return (a <= b);
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int swap;
    t_list *start = lst;

    while (lst)
    {
        t_list *current = start;
        while (current && current->next)
        {
            if ((*cmp)(current->data, current->next->data) == 0)
            {
                swap = current->data;
                current->data = current->next->data;
                current->next->data = swap;
            }
            current = current->next;
        }
        lst = lst->next;
    }
    return (start);
}

t_list *lstnew(int num)
{
    t_list *ptr = malloc(sizeof(t_list));
    if (!ptr)
        return NULL;
    ptr->next = NULL;
    ptr->data = num;
    return ptr;
}

void ft_lstprint(t_list *ptr)
{
    while (ptr)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    t_list *head = lstnew(239);
    head->next = lstnew(329);
    head->next->next = lstnew(400);
    head->next->next->next = lstnew(500);
    ft_lstprint(head);
    head = sort_list(head, ascending);
    ft_lstprint(head);

    return 0;
}

