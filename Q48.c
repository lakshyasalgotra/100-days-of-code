/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

int main() {
    int row, col;

    // Outer loop controls the row number (from 1 to 5)
    for (row = 1; row <= 5; row++) {
        // Inner loop prints numbers from 1 up to the row number
        for (col = 1; col <= row; col++) {
            printf("%d", col);
        }
        // Move to the next line after printing numbers for a row
        printf("\n");
    }

    return 0;
}
