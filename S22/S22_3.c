//Problem 3:- To find the position of 1st set bits from Right Side.
#include<stdio.h>
#include<math.h>
void main()
{
   int x,y,n;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   x=n && (n-1);
   y=log(n^x)/log(2);
   printf("The position of 1st set bits from Right is %d\n",y+1);
   printf("The size of int is %d\n",__SIZEOF_INT__);
}