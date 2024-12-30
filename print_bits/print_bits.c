#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1,&bit,1);
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
