#include <unistd.h>

int calculate_the_lenght(int num)
{
	int counter = 0;
	while(num)
	{
		num /= 2;
		counter++;
	}
	return counter;
}

void	print_bits(unsigned char octet)
{
	int len = calculate_the_lenght(octet - '0');
	int i=0;
       	while(i < 8 - len)
	{
		write(1,"0",1);
		i++;
	}
	char arr[len];
	i=len;
	while(len--)
	{
		arr[len] = (octet % 2) + '0';
		octet /= 2;
	}
	while(len < i)
	{
		write(1,&arr[len],1);
		len++;
	}	
}

#include <stdio.h>

int main()
{
	print_bits(2);
	printf("\n");
	print_bits(4);
	printf("\n");
}
