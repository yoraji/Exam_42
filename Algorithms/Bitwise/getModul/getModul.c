#include<stdio.h>

unsigned int getModulo(unsigned int n, unsigned int d){
    int last = n&(d-1);
    return last;
}

int main()
{
    unsigned int n = 12;
    unsigned int d = 8; 
    printf("%u modulo %u is %u", n, d, getModulo(n, d));
 
    getchar();
    return 0;
}
