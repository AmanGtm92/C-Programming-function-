#include <stdio.h>
//reverse integer

int reverseNumber(int n) {
    int reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed Number: %d\n", reverseNumber(num));
    return 0;
}
