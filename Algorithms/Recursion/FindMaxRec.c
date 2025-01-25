#include<stdio.h>

int findMaxRec(int A[],int size){
    if(size == 0)
        return A[0];
    int Mark = findMaxRec(A,size-1);
    if(A[size-1] < Mark)
        return Mark;
    else
        return A[size-1];
}

int main() 
{ 
    int A[] = {1, 4, 45, 6, -50, 10, 2}; 
    int n = sizeof(A) / sizeof(A[0]); 
    printf("%d\n", findMaxRec(A, n)); 
    return 0; 
}
