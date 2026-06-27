#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], ch;
    int count[256]={0},i,max=0;
    printf("Enter a string");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    count[(unsigned char)str[i]]++;

    for(i=0;i<256;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            ch=i;
        }
    }
    printf("Maximum occuring character=%c",ch);
    return 0;
}