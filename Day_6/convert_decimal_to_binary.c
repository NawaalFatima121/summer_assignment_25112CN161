#include <stdio.h>
int main() {
    int decimal, remainder, i = 1, binary = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + remainder * i;
        decimal = decimal / 2;
        i = i * 10;
    }

    printf("Binary number: %d\n", binary);
    return 0;
}