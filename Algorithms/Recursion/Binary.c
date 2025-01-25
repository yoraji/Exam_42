#include <stdio.h>

int find(int num)
{
    if(num == 0)
        return 0;
    else
        return ((num%2)+10*find(num /2));
}

int main()
{
    int num = 42;
    printf("%d\n",find(num));
    return 0;
}
