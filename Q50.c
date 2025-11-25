/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *


Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() {
    int i, j; // Loop counters

    // Loop for each line, total 5 lines
    for (i = 0; i < 5; i++) {
        // Print spaces for indentation
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars for the current line (stars decrease each line)
        for (j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
