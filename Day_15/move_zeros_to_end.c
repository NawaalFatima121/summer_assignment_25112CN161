#include<stdio.h>
int main()
{
    int n, i,j=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            arr[j++] = arr[i];
        }
    }
    while(j<n)
    {
        arr[j++] = 0;
    }
    printf("Array after moving zeros to the end: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}