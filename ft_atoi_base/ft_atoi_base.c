#include <stdio.h>

int find_base(char str)
{
	if (str >= '0' && str <= '9')
		return (str - '0');
	if (str >= 'a' && str <= 'z')
		return  (str - 'a' + 10);
	if (str >= 'A' && str <= 'Z')
		return (str - 'A' + 10);
	return -1;
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i=0;
	int signe = 1;
	int res = 0;
	if (str_base < 2 || str_base > 16)
		return 0;
	while(str[i] == ' ' && str[i] == '\t')
		i++;
	while(str[i]  == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while(str[i])
	{
		int index = find_base(str[i]);
		if ( index < 0 || index >= str_base)
			break;
		res = res * str_base + index;
		i++;
	}
	return (res * signe);
}

int main()
{
	int base = 2;
	char str[] = "101010";
	int result = ft_atoi_base(str, base);
	printf("%d\n",result);
}

