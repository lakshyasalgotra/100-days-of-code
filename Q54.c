/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 4; // Middle row number of stars (7 stars here)

    // Top half of diamond including middle row
    for (i = 1; i <= rows; i++) {
        // Print leading spaces decreasing each row
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars (odd numbers: 1,3,5,7)
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of diamond excluding middle row
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces increasing each row
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars (odd numbers: 5,3,1)
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
