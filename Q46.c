/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main() {
    int row, col;

    // Outer loop for each row (5 rows)
    for (row = 1; row <= 5; row++) {
        // Inner loop for each column (5 columns)
        for (col = 1; col <= 5; col++) {
            printf("*");
        }
        // Move to the next line after printing 5 stars
        printf("\n");
    }

    return 0;
}
