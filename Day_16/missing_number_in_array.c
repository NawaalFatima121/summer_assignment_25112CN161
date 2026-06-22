#include<stdio.h>
int main()
{
    int n, i,sum=0,total=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter the elements of the array: ");
    for(i=0; i<n-1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    total = n * (n + 1) / 2;
    printf("Missing number: %d", total - sum);
    return 0;
}