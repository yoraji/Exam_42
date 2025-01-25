#include<stdio.h>
#include<string.h>
#include<stdbool.h>

//this now more clearly and super easiy
int isPalRec(char str[], int start,int end){
    //when we arrive to the same index
    if(start == end)
        return 1;
    //if we have no matching 
    if(str[start] != str[end])
        return 0;
    //comparing the state of start and end
    if(start < end+1)
        return isPalRec(str,start+1,end-1);
}

bool isPalindrome(char str[])
{
    int n =strlen(str);
    //in the case of empty string
    if(n == 0)
        return 1;
    // it will return the final result;
    return isPalRec(str, 0, n - 1);
}

int main()
{
    char str[] = "geeg";
 
    if (isPalindrome(str))
       printf("Yes\n");
    else
        printf("No\n");
 
    return 0;
}
