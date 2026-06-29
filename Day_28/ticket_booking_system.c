#include<stdio.h>
int main()
{
    char name[50];
    int seats;
    float price, total;
    printf("enter name");
    scanf("%s",name);
    printf("enter number of seats");
    scanf("%d",&seats);
    printf("enter ticket price");
    scanf("%f",&price);
    total=seats*price;
    printf("booking successful");
    printf("passenger:%s",name);
    printf("total amount:%.2f",total);
    return 0;
}