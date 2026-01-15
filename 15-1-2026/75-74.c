#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int A[50][50], B[50][50], Sum[50][50];

    // Read matrix A
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    // Read matrix B
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    // Add
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            Sum[i][j] = A[i][j] + B[i][j];

    // Print result
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d", Sum[i][j]);
            if (j < c - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}