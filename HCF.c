#include <stdio.h>
// Find HCF of Two Numbers

int hcf(int a, int b) {
    return (b == 0) ? a : hcf(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("HCF: %d\n", hcf(num1, num2));
    return 0;
}
