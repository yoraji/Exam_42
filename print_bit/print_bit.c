#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned char c)
{
	int i=8;
	unsigned char bit = 0;
	while(i--)
	{
		bit = (c >> i & 1) + '0'; // so important to know ?!
		write(1,&bit,1);
	}
}

int main()
{
	char a = 42;
	print_bits(a);
	write(1,"\n",1);
	return 0;
}
