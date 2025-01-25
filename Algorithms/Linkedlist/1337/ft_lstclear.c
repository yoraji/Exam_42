#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *buffer;
    while(*lst != NULL)
    {
        buffer = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = buffer;
    }
    *lst = NULL;
}
