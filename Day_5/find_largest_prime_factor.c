#include<stdio.h>
int main() {
    int n, i, largest_prime_factor = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            int is_prime = 1;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) {
                largest_prime_factor = i;
            }
        }
    }
    printf("The largest prime factor of %d is %d.\n", n, largest_prime_factor);
    return 0;
}