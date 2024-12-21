#include <stdio.h>

int main() {
    int m, n, p, q;

    // Input matrix dimensions
    printf("Enter rows & columns of matrix 1: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows & columns of matrix 2: ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Multiplication is not possible!\n");
    } else {
        // Declare matrices after dimensions are known
        int a[m][n], b[p][q], c[m][q];

        // Input elements of matrix 1
        printf("Input elements of matrix 1:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        // Input elements of matrix 2
        printf("Input elements of matrix 2:\n");
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        // Matrix multiplication
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                c[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Print the resultant matrix
        printf("Resultant Matrix:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
