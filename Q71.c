/*Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>


int main() {
    // Declare variables to store the number of rows and columns
    int rows, cols;

    // Prompt the user to enter the size of the matrix (rows and columns)
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Define the matrix using a two-dimensional array
    int matrix[rows][cols];

    // Explain: Reading matrix elements from the user
    printf("Enter elements of the matrix:\n");
    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Loop through each column
        for (int j = 0; j < cols; j++) {
            // Prompt for each element separately
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the entered matrix in matrix format
    printf("The entered matrix is:\n");
    // Loop again through the matrix to print its elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Print current element followed by a space
            printf("%d ", matrix[i][j]);
        }
        // Print a new line after each row for proper formatting
        printf("\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
