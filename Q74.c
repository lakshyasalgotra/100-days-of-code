/*Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main() {
    int rows, cols;

    // Read number of rows and columns from user input
    scanf("%d %d", &rows, &cols);

    // Declare the original matrix with given sizes
    int matrix[rows][cols];

    // Read the matrix elements row-wise
    for (int i = 0; i < rows; i++) {  
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the transpose of the matrix
    // The transpose of a matrix is obtained by swapping rows and columns
    // So, element at position (i, j) in original matrix will be at (j, i) in transpose matrix
    for (int j = 0; j < cols; j++) {       // iterate over columns first (for transpose rows)
        for (int i = 0; i < rows; i++) {   // iterate over rows (for transpose columns)
            printf("%d ", matrix[i][j]);   // print element at (i, j) of original matrix
        }
        printf("\n");  // Move to next line after each row of transpose is printed
    }

    return 0;
}
