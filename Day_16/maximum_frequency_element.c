#include<stdio.h>
int main()
{
    int n, i,max_freq=0, max_freq_element;
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
        int count = 1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > max_freq)
        {
            max_freq = count;
            max_freq_element = arr[i];
        }
    }
    printf("Element with maximum frequency: %d (Frequency: %d)", max_freq_element, max_freq);
    return 0;
}