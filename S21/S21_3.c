// Problem 2:- Check whether kth bit is set or not 
#include<stdio.h>
int main()
{
int n,k;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Enter the value of k\n");
scanf("%d",&k);
    if((n&(1<<(k-1)))!=0)
    printf("Yes\n");
    else
    printf("No\n");
}

