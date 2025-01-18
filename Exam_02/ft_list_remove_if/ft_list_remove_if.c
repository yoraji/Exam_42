#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

t_list	*ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr;
	t_list *tmp;
	t_list *to_return;
	//from the begining cheack the if you can remove from the begining
	while(*begin_list && cmp((*begin_list)->data, data_ref == 0))
	{
		curr = *begin_list;
		*begin_list = (*begin_list)->next;
		free(curr);
	}
	curr = *begin_list;
	to_return = *begin_list;
	//then the curr->next is often the adress that you want to remove from the list
	while(curr && curr->next)
	{
		if(cmp(curr->next->data, data_ref) == 0)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
		}
		curr = curr->next;
	}
	return (to_return);
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

    lst = ft_list_remove_if(&lst, (void *)(long)5, &cmp);

    printf("--------------------------------------------------------\n");
    printf("Modified list:\n");
    ft_printlist(lst);

    return 0;
}

