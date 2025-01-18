// pattern printing  

#include<stdio.h>
void pattern(int n) {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }
}
int main() 
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    pattern(rows);

    return 0;
}
