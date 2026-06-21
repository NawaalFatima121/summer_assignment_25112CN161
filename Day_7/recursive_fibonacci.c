#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}