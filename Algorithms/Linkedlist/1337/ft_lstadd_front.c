#include<stdlib.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *store = *lst;
    new->next = store;
    *lst = new;
}
