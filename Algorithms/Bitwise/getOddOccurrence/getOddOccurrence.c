#include<stdio.h>

//in the simple way that we all know
int getOddOccurrence(int arr[],int arr_size){
    for(int i=0;i<arr_size;i++){
        int count =0;
        for(int j=0;j<arr_size;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count%2!=0){
            return arr[i];
        }
    }
    return -1;
}
// using the bitwise thing :)

int getOddOccurrence1(int arr[],int arr_size){
    int res =0;
    for(int i=0;i<arr_size;i++){
        res= res^arr[i];
    }
    return res;
}

int main(){
    int arr[] = {2,3,5,4,5,2,4,3,5,2,4,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",getOddOccurrence(arr,size));
    printf("%d\n",getOddOccurrence1(arr,size));
    return 0;
}
