#include <stdlib.h>

int	*ft_rrange(int start,int end)
{
	int	*ptr;
	if (start < end)
		ptr = malloc((end - start) * sizeof(int) + 1);
	else
		ptr = malloc((start - end) * sizeof(int) + 1);
	int i=0;
	while(start != end)
	{
		ptr[i++] = end;
		if (start < end)
		{
			end--;
		}else
			end++;
	}
	ptr[i] = end;
	return (ptr);
}
#include <stdio.h>

void	print_string(int *ptr,int size)
{
	int i=0;
	while(i < size)
	{
		printf("%d ", ptr[i]);
		i++;
	}
	printf("\n");
}


int main()
{
	int num1 = 2;
	int num2 = 7;
	int size = abs(num2 - num1) + 1;
	int size1 = abs(num1 - num2) + 1;	
	int *ptr =  ft_rrange(num1, num2);
	print_string(ptr,size);
	ptr = ft_rrange(num2,num1);
	print_string(ptr,size1);
}
