/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

/*
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
    int row; // controls which line we are printing

    // Loop to print 5 lines
    for (row = 1; row <= 5; row++) {
        int col;
        // Loop to print numbers starting from (6 - row) up to 5
        for (col = 6 - row; col <= 5; col++) {
            printf("%d", col);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
