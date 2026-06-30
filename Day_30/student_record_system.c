#include <stdio.h>
int main()
{
    int roll[5],marks[5],i;
    char name[5][30];
    printf("enter details of 5 students");
    for(i=0;i<5;i++)
    {
        printf("student%d",i+1);
        printf("roll no");
        scanf("%d",&roll[i]);
        printf("name");
        scanf("%s",name[i]);
        printf("marks");
        scanf("%d",&marks[i]);
    }
        printf("student record");
        for(i=0;i<5;i++)
        {
            printf("roll no:%d",roll[i]);
            printf("name:%s",name[i]);
            printf("marks:%d",marks[i]);
        }
        return 0;
}