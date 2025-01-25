#include <stdlib.h>

t_list *ft_lstlast(t_list *lst)
{
    t_list *curr = lst;
    while(curr != NULL){
        curr = curr->next;
    }
    return (curr);
}
