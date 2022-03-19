// this is method 1 to count/print the numer of set bits
#include<stdio.h>
int main(){
int count=0;
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
while(n>0)
{
    if((n&1)==1)
    count++;
    n=n/2; // or we can also do right shift as n=n>>1
}
printf("The numer of set bits is %d\n",count);
return 0;
}