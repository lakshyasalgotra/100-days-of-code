/*Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);  // Read dimensions

    int matrix[n][m];
    for (int i = 0; i < n; i++)       // Read each element of the matrix
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    // Traverse diagonals starting from each row of the first column
    for (int row = 0; row < n; row++) {
        int i = row, j = 0;
        while (i >= 0 && j < m) {
            printf("%d ", matrix[i][j]);
            i--;    // move up
            j++;    // move right
        }
    }

    // Traverse diagonals starting from each column of the last row (excluding first column)
    for (int col = 1; col < m; col++) {
        int i = n - 1, j = col;
        while (i >= 0 && j < m) {
            printf("%d ", matrix[i][j]);
            i--;    // move up
            j++;    // move right
        }
    }
    return 0;
}
