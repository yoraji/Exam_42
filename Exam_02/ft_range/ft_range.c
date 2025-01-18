#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	if (end < start)
	{
		int temp = end;
		end =start;
		start = temp;
	}
	int index = 0;
	int size = end - start + 1;
	int *str = malloc(size*sizeof(int));
	while(start <= end)
	{
		str[index++] = start++;
	}
	return str;
}

int main()
{
	int start = 0;
	int end = -3;
	int *num = ft_range(start,end);
	int i=0;
	while(end <= start)
	{
		printf("%d ",num[i]);
		i++;end++;
	}
	printf("\n");
}
