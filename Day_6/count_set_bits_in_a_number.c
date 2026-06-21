#include<stdio.h>
int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num) {
        count += num & 1; // Increment count if the last bit is 1
        num >>= 1; // Right shift the number by 1 to check the next bit
    }
    
    printf("Number of set bits: %d\n", count);
    return 0;
}