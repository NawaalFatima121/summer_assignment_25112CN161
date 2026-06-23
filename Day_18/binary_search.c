#include<stdio.h>
int main()
{
    int n, i, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in sorted order: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    int low = 0, high = n - 1, mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key)
        {
            printf("Element found at index %d\n", mid+1);
            return 0;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found in the array\n");
    return 0;
}