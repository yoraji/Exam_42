#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char * argv[])
{
	if (argc == 3)
	{
		int num2 = atoi(argv[1]);
		int num1 = atoi(argv[2]);
		int big = num2;
		if(num1 < num2)
			big = num2;
		else
			big = num1;
		int result = 1;
		for(int i =1; i <= big; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
				result = i;
		}
		printf("%d\n",result);
	}
	else
	{
		printf("\n");
	}
	return 0;
}
