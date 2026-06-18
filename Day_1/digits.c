#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int count=0;
    int original_n=n; 
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("The number of digits in %d is %d",original_n,count);
    return 0;
}