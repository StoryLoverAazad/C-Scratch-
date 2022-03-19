//Problem 2:- No. of bits required to represent a number in a binary number system.
#include<stdio.h>
#include<math.h>
void main()
{
   int n,x;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   x=log(n)/log(2);
   printf("The numer of digits is %d\n",x+1);
   printf("The size of int is %d\n",__SIZEOF_INT__);
}