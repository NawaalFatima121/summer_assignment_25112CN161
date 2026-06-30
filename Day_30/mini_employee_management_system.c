#include<stdio.h>
int main()
{
    int n,i;
    int id[50];
    float salary[50];
    char name[50][50];
    printf("enetr no of employees");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("employee %d",i+1);
        printf("enter id");
        scanf("%d",&id[i]);
        printf("enter name");
        scanf("%s",name[i]);
        printf("enter salary");
        scanf("%f",&salary[i]);
    }
    printf("employee details");
    for(i=0;i<n;i++)
    {
        printf("id %d",id[i]);
        printf("name %s",name[i]);
        printf("salary %.2f",salary[i]);
    }
    return 0;
}