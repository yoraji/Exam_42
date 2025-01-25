#include<stdio.h>
#include<stdbool.h>
bool isPowerofTwo (long long n){
    if(n <= 0){
        return 0;
    }
    if((n & (n - 1)) == 0)
        return 1;
    return 0;
}
int main(){
    isPowerofTwo(30) ==0 ?printf("NO\n"):printf("Yes\n");
    return 0;

}
