#include<stdio.h>

int setBits(int num){
    int counter = 0;
    while(num){
        num = num & (num-1);
        counter++;
    }
    return counter;
}
int reccountBits(int n){
    // here when we ending the recursion
    if(n == 0){
        return 0;
    }else
        //(n & 1) it work like a counter 
        //if the last bit set add 1 else 0;
        return (n & 1) + reccountBits(n >> 1);
}

int countsetBits(unsigned int n){
    unsigned int count = 0;
    while(n != 0){
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int number = 5;
    int result = setBits(number);
    printf("%d\n",result);
    result = countsetBits(number);
    printf("%d\n",result);
    result = reccountBits(number);
    printf("%d\n",result);
}
