#include<schannel.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d\n", n, reverse_number(n));
    return 0;
}