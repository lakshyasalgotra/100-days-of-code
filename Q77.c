/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns of the matrix
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {  
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Number of elements on the main diagonal is minimum of rows and cols
    int diagonalLength = (rows < cols) ? rows : cols;

    // Check for distinctness of elements on the main diagonal
    int distinct = 1; // Flag to assume diagonal elements are distinct initially

    // Compare each pair of diagonal elements
    for (int i = 0; i < diagonalLength; i++) {
        for (int j = i + 1; j < diagonalLength; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; // Duplicate found on diagonal
                break;
            }
        }
        if (!distinct) break; // Exit early if duplicate found
    }

    // Print result based on distinctness flag
    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
