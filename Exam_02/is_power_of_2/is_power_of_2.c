#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	while(n%2==0)
		n/=2;
	if (n == 1)
		return 1;
	return 0;
}

int main()
{
	int num = 8;
	int num1 = 6;
	int num3 = 81;
	printf("%d\n",is_power_of_2(num));
	printf("%d\n",is_power_of_2(num1));
	printf("%d\n",is_power_of_2(num3));
}
