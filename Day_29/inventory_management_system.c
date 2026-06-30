#include<stdio.h>
int main()
{
    char name[30];
    int quantity;
    float price;
    printf("enter product name:");
    scanf("%s",name);
    printf("enter quantity");
    scanf("%d",&quantity);
    printf("enter price");
    scanf("%f",&price);
    printf("inventory details");
    printf("product:%s",name);
    printf("quantity:%d",quantity);
    printf("price:%.2f",price);
    printf("total value:5.2f",quantity*price);
    return 0;
}