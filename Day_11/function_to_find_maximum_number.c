#include<stdio.h>
int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Maximum of %d and %d is: %d\n", a, b, maximum(a, b));
    return 0;
}