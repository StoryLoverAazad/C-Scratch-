//Divisors to be printed in sorted order .
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for (i=1;i*i<=n;i++)
    {
        if(n%i==0)
        printf("%d ",i);
        //this for loop will run upto i=root of n
    }
    //Now at i=root of n
    for(  ;i>=1;i--)
    { //in for loop 1st position is left first blank as i has already value as i=root of n 
        if(n%i==0)
        printf("  %d ",n/i);
    }
    return 0;
}