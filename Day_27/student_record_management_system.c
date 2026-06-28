#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct student s;
    printf("Enter roll no:");
    scanf("%d",&s.roll);
    printf("Enter name:");
    scanf("%d",&s.name);
    printf("Enter marks");
    scanf("%d",&s.marks);
    printf("n---student record---\n");
    printf("roll no:%d\n",s.roll);
    printf("name:%s\n",s.name);
    printf("marks:%.2f\n",s.marks);
    return 0;

}