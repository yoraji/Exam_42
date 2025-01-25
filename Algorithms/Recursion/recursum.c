#include<stdio.h>

int recursum(int n){
    if(n <=1)
        return n;
    return n + recursum(n-1);
}
int main()
{
    int n = 5;
    int result = recursum(n);
    printf("%d\n",result);
}
