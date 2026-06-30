#include<stdio.h>
int main()
{
    int a[100],n,i,choice,sum=0;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf(".sum.max.min");
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice)
{
    case1:
    for(i=0;i<n;i++)
    sum+=a[i];
    printf("sum=%d",sum);
    break;
    case2:
    {
    int max=a[0];
    for(i=1;i<n;i++)
    if(a[i]>max)
    max=a[i];
    printf("max=%d",max);
    break;
}
case3:
{
    int min=a[0];
    for(i=1;i<n;i++)
    if(a[i]<min)
    min=a[i];
    printf("min=%d",min);
    break;
}
default:
printf("invalid choice");
}
return 0;
}