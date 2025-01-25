#include<stdio.h>

int factorial(int num){
    if(num == 0)
        return 1;
    else
        return num *factorial(num-1);
}

int main()
{
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
