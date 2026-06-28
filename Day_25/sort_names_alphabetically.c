#include<stdio.h>
#include<string.h>
int main()
{
    char name[20][50],temp[50];
    int n;
    printf("Enter number of names");
    scanf("%d",&n);
    printf("Enter names:\n");
    for(int i=0;i<n;i++)
    scanf("%s",name[i]);
    for (int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpu(name[j],temp);
            }
        }
    }
    printf("sorted names:\n");
    for(int i=0;i<n;i++)
    printf("%s\n",name[i]);
    return 0;
}