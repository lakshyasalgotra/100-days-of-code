/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows for the top half (including middle)

    // Top half of the diamond (1,3,5,7,9 stars)
    for (i = 1; i <= rows; i++) {
        // Print stars: (2*i - 1) stars on the ith line
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n"); // New line after each row
    }

    // Bottom half of the diamond (7,5,3,1 stars)
    for (i = rows - 1; i >= 1; i--) {
        // Print stars: (2*i - 1) stars on the ith line
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
