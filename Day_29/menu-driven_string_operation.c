#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int choice;
    printf("enter string:");
    scanf("%s",str);
    printf(".length.rev.uppercase");
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice)
    {
    case1:
    printf("length=%lu",strlen(str));
    break;
    case2:
    strrev(str);
    printf("rev=%s",str);
    break;
    case3:
    {
        int i;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
        }
        printf("uppercase=%s",str);
        break;
    }
    default:
    printf("invalid choice");
    }
return 0;
}