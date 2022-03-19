//Problem 1:- No. of digits in a number without using loops (using mathematical functions).
#include<stdio.h>
#include<math.h>
void main()
{
   int n,x;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   x=log(n)/log(10);
   printf("The number of digits is %d\n",x+1);
   printf("The size of int is %d\n",__SIZEOF_INT__);
}