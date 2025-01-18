#include "ft_list.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int     ft_list_size(t_list *begin_list)
{
        t_list *temp = begin_list;
        int size = 0;
        while(temp)
        {
                size++;
                temp = temp->next;
        }
        return size;
}

t_list  *new_lst(int num)
{
        t_list *temp = malloc(sizeof(t_list));
        if (!temp)
                return (NULL);
        int *data = malloc(sizeof(int));
        *data = num;
        temp->next = NULL;
        temp->data = data;
        return temp;
}

int main(void)
{
        t_list *head = new_lst(5);
        head->next = new_lst(10);
        head->next->next = new_lst(15);
        head->next->next->next = new_lst(20);
        printf("%d \n", ft_list_size(head));
}

