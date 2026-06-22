#include<stdio.h>
int main()
{
    int n1, n2, i, j, found;
    int arr1[100], arr2[100];
    scanf("%d", &n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("Union of the two arrays is: ");
    for(i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }
    for(i = 0; i < n2; i++)
    {
        found = 0;
        for(j = 0; j < n1; j++)
        {
            if(arr2[i] == arr1[j])
            {
                found = 1;
                break;
            }
        }
        if(!found)
        {
            printf("%d ", arr2[i]);
        }
    }
    return 0;
}