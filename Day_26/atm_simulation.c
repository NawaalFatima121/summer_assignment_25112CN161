#include<stdio.h>
int main()
{
    int choice;
    float bal=10000,amt;
    do
    {
      printf("\n1.bal\n2.deposit\n3.withdraw\n4.exit\n");
      printf("Enter choice");
      scanf("%d",&choice);
        /* code */
switch(choice)
{
    case1:
    printf("bal=%.2f\n",bal);
    break;
    case2:
    printf("enter amount");
    scanf("%f",&amt);
    bal+=amt;
    break;
    case3:
    printf("enter amount");
    scanf("%f",&amt);
    if(amt<=bal)
    bal-=amt;
    else
    printf("insufficient bal");
    break;
    case4:
    printf("thank you\n");
    break;
    default:
    printf("invalid choice");
}

    } while (choice!=4);
    return 0;
    
}