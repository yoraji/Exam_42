#include<stdio.h>

int arrsum(int*array,int size,int result){
    if(size == 0)
        return result;
    return arrsum(array,size-1,result+array[size-1]);
}

int main()
{
    int array[] = { 2, 55, 1, 7 };
    int result =0;
    int size = sizeof(array) / sizeof(array[0]);
    result=arrsum(array, size,result);
    printf("%d\n",result);
    return 0;
}
