#include<stdio.h>
int main()
{
    int a[100], b[100];
    int n, m, i, j,found=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(i=0;i<m;i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Common elements in the two arrays: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ", a[i]);
                found=1;
                break;
            }
        }
    }
    if(!found)
    {
        printf("No common elements found.");
    }
    return 0;
}