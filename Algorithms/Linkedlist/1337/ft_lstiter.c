#include<stdlib.h>

void ft_lstiter(t_list *lst, void(*f)(void *))
{
    if(lst != NULL ||f == NULL)
        return ;
    //i think to reach the last element in the linkedlist 
    while(lst != NULL)
    {
        //it function that remove the contant of the linkedlist;
        f(lst->contant);
        lst = lst->contant;
    }
}
