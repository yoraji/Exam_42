#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = atoi(argv[1]);
		int i=2;
		while (num > 1)
		{
			if (num % i == 0)
			{
				num /= i;
				printf ("%d",i);
				if (num  > 1)
					printf("*");
			}else
				i++;
		}
	}
	printf("\n");
	return 0;
}
