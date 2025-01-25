#include<stdio.h>

// so you can ue it 
//it gives you the acsses to the right most 

unsigned int rightmost(unsigned int n ){
    return(n & (n-1));
}

int main()
{
    unsigned int num =42;
    num = rightmost(num);
    printf("%d\n",num);
}
