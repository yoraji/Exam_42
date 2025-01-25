#include<stdio.h>
#include<stdlib.h>

int findMinRec(int A[],int n){
    if(n == 0){
        return 0;
    }
    int mark = findMinRec(A,n-1);
    if(mark > A[n-1])
        return A[n-1];
    else
        return mark;
}

int main() 
{ 
    int A[] = {1, 4, 45, 6, -50, 10, 2}; 
    int n = sizeof(A) / sizeof(A[0]); 
    printf("%d\n", findMinRec(A, n)); 
    return 0; 
}
