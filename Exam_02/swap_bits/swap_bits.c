unsigned char	swap_bits(unsigned char octet)
{
	char temp2 = octet >> 4;
	char temp1 = octet << 4;
	return (temp2 | temp1);
}

unsigned char swap_bits1(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
#include <stdio.h>
int main()
{
	printf("%d\n",swap_bits(10));
	printf("%d",swap_bits1(10));
}
