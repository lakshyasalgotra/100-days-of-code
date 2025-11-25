/*Q47: Write a program to print the following pattern:
*
**
***
****
*****


Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main() {
    int row, col;

    // Loop for each row
    for (row = 1; row <= 5; row++) {
        // Loop to print 'row' number of stars
        for (col = 1; col <= row; col++) {
            printf("*");
        }
        // After printing stars, move to next line
        printf("\n");
    }

    return 0;
}
