// Q72- Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    int i, j, sum = 0;

    // Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  // 2D array

    // Input elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  // add each element directly
        }
    }

    // Print matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print sum
    printf("Sum of all elements = %d\n", sum);

    return 0;
}
