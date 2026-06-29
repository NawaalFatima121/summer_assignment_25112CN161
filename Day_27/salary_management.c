#include<stdio.h>
int main()
{
    float basic,hra,da,gross;
    printf("Enter basic salary");
    scanf("%f",&basic);
    hra=basic*0.20;
    da=basic*0.10;
    gross=basic+hra+da;
    printf("\nGross salary=%.2f\n",gross);
return 0;
}