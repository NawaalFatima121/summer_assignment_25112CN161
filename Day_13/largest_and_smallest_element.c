#include<stdio.h>
int main()
{
    int n, i;
    float sum = 0.0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; ++i)
    {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    return 0;
}