#include <stdio.h>
#include <math.h>
// find armstrong number 
int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is not an Armstrong Number\n", num);

    return 0;
}
