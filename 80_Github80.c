// Q80- Multiply two matrices

#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("Enter dimensions of Matrix A (rows cols): ");
    scanf("%d %d", &m, &n);
    printf("Enter dimensions of Matrix B (rows cols): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize Result Matrix C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Result
    printf("Product Matrix (A x B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
