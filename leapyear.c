#include <stdio.h>
// Check leap year

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);

    return 0;
}
