/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include <stdio.h>

int main() {
    int n;

    // Input the size of the square matrix (n x n)
    scanf("%d %d", &n, &n);  // rows and cols are equal

    int matrix[n][n];

    // Read the matrix elements
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    // Sum the main diagonal elements
    // The main diagonal elements have the property that row index = column index
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Print the sum of main diagonal elements
    printf("%d\n", sum);

    return 0;
}
