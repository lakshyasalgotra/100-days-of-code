/*Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main() {
    // Declare a character array called str with capacity to store up to 1000 characters (including '\0')
    char str[1000];

    // Variable to serve as a counter for the total number of characters in the string
    int count = 0;

    // Variable to store and traverse current index of the string
    int i = 0;

    // Prompt the user to enter a string (with or without spaces)
    printf("Enter a string:\n");

    // Use fgets to safely read the entire line (including spaces) from standard input
    // It reads up to 999 characters and stores them in 'str'
    // stdin specifies to read from standard input (keyboard)
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Loop to go through each character in the array one by one
        // The loop continues until it finds the special character '\0' (string terminator)
        // '\0' is automatically added by fgets at the end of the input
        while (str[i] != '\0') {
            // If the current character is the newline character '\n' (added when the user presses Enter)
            // then don't count it as part of the input string, break the loop before incrementing count
            if(str[i] == '\n') {
                break;
            }
            // Increment the character count for each character visited (except '\n' or '\0')
            count++;
            // Move to the next index/character in the string
            i++;
        }
    }

    // Print total character count
    printf("%d\n", count);

    return 0;
}
