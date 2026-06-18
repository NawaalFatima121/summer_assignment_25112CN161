#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int original_n=n;
    if (n<0)
    {
        n=-n;
    }
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of digits of %d is %d",original_n,sum);
    return 0;
}