#include<stdio.h>
int main()
{
    char name[50];
    int acc;
    float bal;
    printf("Enter account no:");
    scanf("%d",&acc);
    printf("Enter name");
    scanf("%s",name);
    printf("Enter bal");
    scanf("%f",&bal);
    printf("account no:%d",acc);
    printf("name:%s",name);
    printf("bal:%.2f",bal);
    return 0;
}