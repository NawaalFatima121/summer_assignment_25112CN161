#include<stdio.h>
int main()
{
    int n,i;
    char book[50][50];
    printf("enter no of books:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("enter book %d name",i+1);
        scanf("%s",book[i]);

    }
    printf("library books");
    for(i=0;i<n;i++)
    {
        printf("%d.%s",i+1,book[i]);
    }
    return 0;
}