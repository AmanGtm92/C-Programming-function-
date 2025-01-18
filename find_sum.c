#include <stdio.h>
// Find the Sum of Digits of a Number

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits: %d\n", sumOfDigits(num));
    return 0;
}
