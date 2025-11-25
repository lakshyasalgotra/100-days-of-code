/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main() {
    int row, col;

    // Loop to print each row out of the 5 rows
    for (row = 1; row <= 5; row++) {
        int start_num = 6 - row; // Number to start printing in this row

        // Print spaces for right alignment
        for (col = 1; col <= 5 - row; col++) {
            printf(" ");
        }

        // Print numbers starting from start_num up to 5
        for (col = start_num; col <= 5; col++) {
            printf("%d", col);
        }

        // Move to next line after completing a row print
        printf("\n");
    }

    return 0;
}
