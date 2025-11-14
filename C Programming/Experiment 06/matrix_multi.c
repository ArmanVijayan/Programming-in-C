//Experiment 6.4. WAP that reads two matrices A (m x n) and B (p x q) and computes the product A and B. Read matrix A and matrix B in row major order respectively. Print both the input matrices and resultant matrix with suitable headings and output should be in matrix format only. Program must check the compatibility of orders of the matrices for multiplication.
//Report appropriate message in case of incompatibility

#include <stdio.h>

int main() {
    printf("Name: Arman Vijayan\nSAP ID: 590020130\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int m, n, p, q;

    printf("Enter the order of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the order of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("\nMatrix multiplication NOT possible!\n");
        printf("Reason: Number of columns of A (%d) != Number of rows of B (%d)\n", n, p);
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("\nEnter elements of Matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%5d", B[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix C = A x B (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
