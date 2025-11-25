/*Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    scanf("%d %d", &rows1, &cols1);

    int matrix1[rows1][cols1];

    // Input elements of the first matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input dimensions of the second matrix
    scanf("%d %d", &rows2, &cols2);

    // Check if both matrices have the same dimensions for addition
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible due to dimension mismatch.\n");
        return 0; // Exit the program as addition is not possible
    }

    int matrix2[rows2][cols2];

    // Input elements of the second matrix
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    int sumMatrix[rows1][cols1];

    // Add the corresponding elements of both matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resulting sum matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
