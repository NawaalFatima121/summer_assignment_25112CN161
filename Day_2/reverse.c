#include<stdio.h>
int main()
{
    int n,rem,rev=0;
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
        rev=rev*10+rem;
        n=n/10;
    }
    if(original_n<0)
    {
        rev=-rev;
    }
    printf("The reverse of %d is %d",original_n,rev);
    return 0;
}