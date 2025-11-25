/*Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    // Declare a character array to store the input string (size 1000 for safety)
    char str[1000];

    // Variable for traversing each character in the string
    int i = 0;

    // Prompt the user for input
    printf("Enter a string:\n");

    // Use fgets() to read a line of text (including spaces) from the user
    // This reads up to 999 characters from stdin and stores in str
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Loop through the string, character by character, until the null-terminator '\0' is found
        while (str[i] != '\0') {
            // If the character is a newline '\n' (added when Enter is pressed), break loop (do not print)
            if (str[i] == '\n') {
                break;
            }
            // Print the current character followed by a new line
            printf("%c\n", str[i]);
            // Move to the next character in the string
            i++;
        }
    }

    return 0;
}
