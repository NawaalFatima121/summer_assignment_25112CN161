#include<stdio.h>
struct book
{
    int id;
    char name[50];
    char author[50];
};
int main()
{
    struct book b;
    printf("enter book id");
    scanf("%d,&b.id");
    printf("Enter book name");
    scanf("%s",b.name);
    printf("Enter author name");
    scanf("%s",b.author);
    printf("book details");
    printf("id:5d",b.id);
    printf("book:%s",b.name);
    printf("author:%s",b.author);
    return 0;
}