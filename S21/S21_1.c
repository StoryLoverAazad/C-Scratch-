// this is method 2 to count/print the numer of set bits and therefore this is known as Brian Karninghams Algorithm.This Algorithm is highly standard Algorithm.
#include<stdio.h>
int main(){
int count=0;
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
while(n>0)
{
    n=n & (n-1);
    count++;
}
 printf("The number of set bits is %d\n",count);
return 0;
}