#include<stdio.h>
int main()
{
    int choice;
    float a,b;
    printf("enter two no:");
    scanf("%f%f",&a,&b);
    printf("addition");
    printf("substraction");
    printf("multiplication");
    printf("division");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case1:
        printf("resukt=%.2f",a+b);
        case2:
        printf("result=%.2f",a-b);
        case3:
        printf("result=%.2f",a*b);
        case4:
        if(b!=0)
        printf("result=-%.2f",a/2);
        elseprintf("division by zero is not possible");
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}