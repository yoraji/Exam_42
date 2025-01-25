#include<stdio.h>

void reverse(char *a,int index,int size){
        if(index == size)
            return ;
        reverse(a,index+1,size);
        printf("%c",a[index]);
}

int main() {
   
    char a[] = "Geeks for Geeks";
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a, 0, n);
    printf("\n");
    return 0;
}
