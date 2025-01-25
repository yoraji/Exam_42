#include<stdio.h>
#include<stdlib.h>

int fiboreversed(int num,int a,int b)
{
    if(num > 0){
        fiboreversed(num-1,b,a+b);
        printf("%d ",a);
    }
}

int main()
{
    int num =5;
    fiboreversed(num,0,1);
    return 0;

}
