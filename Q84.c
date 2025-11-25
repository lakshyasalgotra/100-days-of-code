/*: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() {
    char str[100];          // Array to store the input string (max 99 characters)
    int i = 0;              // Index for iterating through the string

    printf("Enter a lowercase string: ");
    scanf("%s", str);       // Read input string (without spaces)

    // Loop until end of string (null terminator '\0')
    while (str[i] != '\0') {
        // Check if the character is lowercase letter (ASCII 'a' to 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = str[i] - 32;
        }
        i++;                // Move to next character
    }

    // Print the converted uppercase string
    printf("Uppercase string: %s\n", str);

    return 0;
}
