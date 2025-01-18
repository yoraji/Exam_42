#include <unistd.h>

int ft_atoi(char *str)
{
	int i=0;
	int signe = 1;
	int result =0;
	while(str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i]  == '-')
	{
		if(str[i] == '-')
			signe = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result * signe;
}

void printf_char(char c)
{
	write(1,&c,1);
}

void printf_res(int res)
{
	if (res >= 10)
		printf_res(res/10);
	printf_char((res%10)+ '0');
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i=1;
		char res;
		int result = 0;
		int num = ft_atoi(argv[1]);
		while(i <= 9)
		{
			char c = i + '0';
			printf_res(i);
			write(1," x ",3);
			printf_res(num);
			write(1," = ",3);
			printf_res(num*i);
			write(1,"\n",1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
