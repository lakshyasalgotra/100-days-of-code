/*Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int row_sums[rows];

    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        row_sums[i] = sum;
    }

    // Print sum of each row
    for (int i = 0; i < rows; i++) {
        printf("%d ", row_sums[i]);
    }
    printf("\n");

    return 0;
}
