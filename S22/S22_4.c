//Problem 4:- Given a binary number M and N.how many bits to be flipped to get N??
// if we know that how many bits are different then we can find out --> to get this we have a operator called XOR operator as XOR gives 0 for the same values and 1 for opposite values.
#include<stdio.h>
int main()
{
   int M,N,x;
   int count=0;
   printf("Enter the value of M\n");
   scanf("%d",&M);
   printf("Enter the value of N\n");
   scanf("%d",&N);
   x=M^N;
   while (x>0)
   {
       x=x & (x-1);
       count++;
   }
   printf("The number of bits to be flipped to get N is %d\n",count);
}