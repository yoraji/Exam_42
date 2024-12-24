#include <stdio.h>
#include <unistd.h>

int ft_atoi(const char *str)
{
	int result =0;
	int signe =1;
	int i=0;
	if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe =-1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return result*signe;
}

int main()
{
	char str[] = " 1337 is the best";
	int res = ft_atoi(str);
	printf("%d\n", res);
}
