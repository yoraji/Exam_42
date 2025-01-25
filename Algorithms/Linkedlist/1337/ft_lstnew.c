#include <stdlib.h>

struct *ft_lstnew(int contant)
{
    t_list *head = (struct t_list *)malloc(sizeof(t_list));
    if(!head)
        return NULL;
    head->contant = contant;
    head->next = NULL;
    return (head);
}
