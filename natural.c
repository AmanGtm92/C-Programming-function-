#include <stdio.h>
// addition of prime number 

int sumOfNaturalNumbers(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers: %d\n", n, sumOfNaturalNumbers(n));
    return 0;
}
