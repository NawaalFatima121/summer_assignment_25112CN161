#include<stdio.h>
int main()
{
    int n, reversed = 0, original, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original = n; // Store the original number
    
    while (n != 0) {
        remainder = n % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        n /= 10; // Remove the last digit
    }
    
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    
    return 0;
}
