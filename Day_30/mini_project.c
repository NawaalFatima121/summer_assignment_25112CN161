#include<stdio.h>
void display(int roll[],char name[][50],int marks[],int n)
{
    int i;
    printf("student details");
    for(i=0;i<n;i++)
    {
        printf("roll %d",roll[i]);
        printf("name %s",name[i]);
        printf("marks %d",marks[i]);
    }
}
int main()
{
    int n,i;
    int roll[50],marks[50];
    char name[50][50];
    printf("enter no of student");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     printf("student %d",i+1);
     printf("roll no");
     scanf("%d",&roll[i]);
     printf("name");
     scanf("%s",name[i]);
     printf("marks");
     scanf("%d",&marks[i]);
    }
    display(roll,name,marks,n);
    return 0;
}