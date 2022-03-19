//Divisors with more efficient code than previous ones.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for (i=1;i*i<=n;i++)
    {
        if(n%i==0)
        printf(" %d %d\n",i,n/i);
    }
    //here for loop run for root n times.
    return 0;
}