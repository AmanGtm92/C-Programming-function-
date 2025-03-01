
// Find the Sum of the Diagonal Elements in a Matrix
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the %dx%d matrix:\n", n, n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) // Condition for primary diagonal
                sum += matrix[i][j];
        }
    }

    printf("Sum of the diagonal elements: %d\n", sum);
    return 0;
}
