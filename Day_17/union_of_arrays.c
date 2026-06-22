#include<stdio.h>
int main()
{
    int a[100], b[100];
    int n, m, i, j, found=0;
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
    printf("Union of the two arrays: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    for(i=0;i<m;i++)
    {
        found=0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                found=1;
                break;
            }
        }
        if(!found)
        {
            printf("%d ", b[i]);
        }
    }
    return 0;
}