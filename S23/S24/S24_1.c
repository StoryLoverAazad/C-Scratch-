//Non-prime number having exactly 3 divisors --->>> square of prime number has exactly 3 divisors (1,p and p^2)

// problem-1:-print prime numbers between 1 and n.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        if(n%i==0)
        printf(" %d is not a prime number\n",i);
        else
        printf("%d is a prime number\n",i);
    }
    return 0;
}