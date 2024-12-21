#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_printf_number(int num)
{
	if (num == 0)
	{
		write(1,"0",1);
		return ;
	}
	if (num >= 10)
	{
		ft_printf_number(num / 10);
	}
	ft_putchar((num%10) + '0');
}

int main(void)
{
	int num =1;
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write(1,"fizzbuzz", 8);
		else if (num % 5 == 0)
			write(1,"buzz", 4);
		else if (num % 3 == 0 )
			write(1,"fizz",4);
		else 
			ft_printf_number(num);
		write(1,"\n",1);
		num++;
	}
	write(1,"\n",1);
	return 0;
}
