/*Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>


int main() {
    // Declare variables for matrix dimensions
    int rows, cols;

    // Prompt the user to enter the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Declare the matrix using a 2D array
    int matrix[rows][cols];

    // Variable to store the sum of matrix elements, initialized to 0
    int sum = 0;

    // Input matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of all elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];  // Add each element to sum
        }
    }

    // Print the final sum of all matrix elements
    printf("Sum of all elements: %d\n", sum);

    return 0; // Indicate successful program termination
}
