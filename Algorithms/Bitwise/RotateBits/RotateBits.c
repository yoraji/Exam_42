#include<stdio.h>
/*
 * the first thing is that :
 *      we shift the number n by d but we have this problem
 *      is that 32 you can custom it to the size that the data type can
 *      can hold .
 *      Example :
 *       if the data type that we talking about is int so we have to
 *       substract by 32
 */
int rightRotate(int n,int d){
   return(n>>d)|(n<<(32-d));
}
int leftRotate(int n,int d){
    return(n<<d)|(n>>(32-d));
}

int main()
{
  int n = 16;
  int d = 2;
  printf("Left Rotation of %d by %d is ", n, d);
  printf("%d", leftRotate(n, d));
  printf("\nRight Rotation of %d by %d is \n", n, d);
  printf("%d", rightRotate(n, d));
  return 0;
}
