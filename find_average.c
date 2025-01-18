#include <stdio.h>
// Find the Average of Three Numbers

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Average: %.2f\n", average(num1, num2, num3));
    return 0;
}
