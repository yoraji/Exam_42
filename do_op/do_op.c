#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_do_op(int num1,int num2, char c)
{
	int res;
	if(c == '+')
		printf("%d\n",num1 + num2);
	else if (c == '-'){
		printf("%d\n",num1 - num2);
	}else if (c == '*'){
		printf("%d\n",num1 * num2);
	}else if (c == '/'){
		printf("%d\n",num1 / num2);
	}else
		return ;
}

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[3]);
		char c = argv[2][0];
		ft_do_op(num1,num2,c);
	}
	return 0;
}
