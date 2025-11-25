/*Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int n;

    // Input the dimension of the square matrix
    scanf("%d %d", &n, &n);  // Assuming square matrix, so rows = cols = n

    int matrix[n][n];

    // Read the matrix elements
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1; // Flag to track if matrix is symmetric, assume true initially

    // Check if the matrix is symmetric
    // A matrix is symmetric if matrix[i][j] == matrix[j][i] for all i,j
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;  // Mark false if any element violates symmetry
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // Print the result
    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
