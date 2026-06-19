#include<stdio.h>
int main()
{
    int n, prod= 1, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n > 0) {
        digit = n % 10; // Get the last digit
        prod= prod * digit; // Multiply it to the product
        n /= 10; // Remove the last digit
    }
    
    printf("Product of the digits: %d\n", prod);
    return 0;
}