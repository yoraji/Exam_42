#include <stdio.h>

void	swap_elements(int* tab, unsigned int p1, unsigned int p2)
{
	int swap = tab[p1];
	tab[p1] = tab[p2];
	tab[p2] = swap;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i=0;
	unsigned int j=0;
	if(size <= 1)
		return ;
	while(i < size)
	{
		j=0;
		while(j < size - 1)
		{
			if(tab[j] > tab[j+1])
				swap_elements(tab, j ,j + 1);
			j++;
		}
		i++;
	}
}

int main()
{
	int tab[] = {-1, 6,76,354,-6,54,34,654,432,43, -23 };
	unsigned int size = 11;

	sort_int_tab(tab,size);

	unsigned int i=0;
	while(i < size)
	{
		printf("%d:%d\n",i,tab[i]);
		i++;
	}
	return 0;
}
