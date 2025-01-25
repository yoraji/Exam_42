#include<stdio.h>

int reclen(char *str){
    if(*str == '\0'){
        return 0;
    }else
        return 1 + reclen(str+1);
}

int main()
{
    char str[] = "GeeksforGeeks";
    printf("%d",reclen(str));
    return 0;
}
