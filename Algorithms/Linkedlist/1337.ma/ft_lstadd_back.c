#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct *next;
}   t_list;

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *curr = *lst ;
    if((*lst) == NULL){
        *lst = new;
        return ;
    } else {
        while(curr->next != NULL)
        curr = curr->next;
    }   
    curr->next = new;
}
