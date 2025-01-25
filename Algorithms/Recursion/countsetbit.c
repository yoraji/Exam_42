#include<stdio.h>
#include<stdbool.h>

int bin(int n){
    if (n == 0)
        return 0;
    if ((n & 1) == 1)
        return 1 + bin(n >> 1);
    else
        return bin(n >> 1);
}


int main()
{
    int n = 42;
    printf("%d\n",bin(n));
    return 0;
}
