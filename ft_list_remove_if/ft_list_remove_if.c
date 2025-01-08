#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current = *begin_list;
    t_list *previous = NULL;

    while (current)
    {
        if ((*cmp)(current->data, data_ref) == 0)
        {
            t_list *to_free = current;
            if (previous == NULL) // in the case of the first time you enter 
                *begin_list = current->next;
            else // in the normal case 
                previous->next = current->next;
            current = current->next;
            free(to_free);
        }
        else
        {
            previous = current;
            current = current->next;
        }
    }
}

void ft_printlist(t_list *lst)
{
    while (lst)
    {
        printf("%d\n", (int)(long)lst->data); // Safe cast for printing
        lst = lst->next;
    }
}

t_list *lst_new(void *data)
{
    t_list *lst = (t_list *)malloc(sizeof(t_list));
    lst->next = NULL;
    lst->data = data;
    return lst;
}

int cmp(void *a, void *b)
{
    if ((int)(long)a == (int)(long)b)
        return 0;
    else
        return 1;
}

int main(void)
{
    t_list *lst = lst_new((void *)(long)5);
    lst->next = lst_new((void *)(long)3);
    lst->next->next = lst_new((void *)(long)30);
    lst->next->next->next = lst_new((void *)(long)6);
    lst->next->next->next->next = lst_new((void *)(long)9);
    lst->next->next->next->next->next = lst_new((void *)(long)5);
    lst->next->next->next->next->next->next = lst_new((void *)(long)2);
    lst->next->next->next->next->next->next->next = lst_new((void *)(long)4);

    printf("Original list:\n");
    ft_printlist(lst);

    ft_list_remove_if(&lst, (void *)(long)5, &cmp);

    printf("--------------------------------------------------------\n");
    printf("Modified list:\n");
    ft_printlist(lst);

    return 0;
}

