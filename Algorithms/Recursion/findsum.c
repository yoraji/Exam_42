#include<stdio.h>

int findsum(int array[],int N){
    if(N == 0)
        return 0;
    else
        return (array[N-1] + findsum(array, N-1));
}

int main()
{
    int array[] = {1, 2,3,4,5};
    int N = sizeof(array)/sizeof(array[0]);
    printf("%d\n",findsum(array,N));
    return 0;
}
