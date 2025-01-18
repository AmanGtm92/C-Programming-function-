// Display Multiplication Table

#include <stdio.h>
void printTable(int num) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printTable(num);
    return 0;
}
