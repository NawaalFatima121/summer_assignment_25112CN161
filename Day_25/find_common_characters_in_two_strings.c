#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[100];
    printf("Enter first string");
    scanf("%d",s1);
    printf("Enter second string");
    scanf("%d",s2);
    printf("common characters");
    for(int i=0;s1[i]!='\0';i++)
    {
        for(int j=0;s2[j]!='\0';j++)
        {
            if(s1[i]==s2[j])
            {
                orintf("%c",s1[i]);
                break;
            }
        }
    }
    return 0;
}
