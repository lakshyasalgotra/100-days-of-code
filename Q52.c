/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    // Print first group (1 star)
    printf("*\n\n");

    // Print second group (4 stars)
    printf("*\n*\n*\n*\n\n");

    // Print third group (5 stars)
    printf("*\n*\n*\n*\n*\n\n");

    // Print fourth group (3 stars)
    printf("*\n*\n*\n\n");

    // Print fifth group (1 star)
    printf("*\n");

    return 0;
}
