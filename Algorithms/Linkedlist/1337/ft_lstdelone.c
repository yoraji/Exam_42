#include<stdlib.h>

void ft_lstdelone(t_list **lst,void (*del)(void *)){
    t_list *buffer = (*lst)->next;
    if(!lst)
        return ;
    if(del)
        del(lst->contant);
    free(lst);

}
