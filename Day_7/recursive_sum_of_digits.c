#include<stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d\n", n, sum_of_digits(n));
    return 0;
}