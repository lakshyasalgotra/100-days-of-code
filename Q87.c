#include <stdio.h>  // For input/output functions
#include <ctype.h>  // For character type functions

int main() {
    char str[100];  // Array to hold the input string (up to 99 chars + null terminator)
    int spaces = 0;  // Counter for space characters
    int digits = 0;  // Counter for digit characters
    int special = 0; // Counter for special characters

    // Prompt the user to enter the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string including spaces

    // Loop through each character in the string until the null terminator '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            // If the character is a space, increment spaces counter
            spaces++;
        } else if (isdigit(str[i])) {
            // If the character is a digit (0-9), increment digits counter
            digits++;
        } else if (!isalpha(str[i]) && str[i] != '\n') {
            // If the character is not an alphabet letter and not newline, count as special character
            special++;
        }
    }

    // Output the counts of spaces, digits, and special characters
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;  // Indicate successful program termination
}
