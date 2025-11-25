#include <stdio.h>   // For input/output functions
#include <ctype.h>   // For character handling functions

int main() {
    char str[100];   // Array to hold the input string (up to 99 chars + null terminator)

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    // Loop through each character of the string until null terminator '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if character is uppercase letter
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);  // Convert uppercase to lowercase
        }
        // Check if character is lowercase letter
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);  // Convert lowercase to uppercase
        }
        // Non-alphabetic characters remain unchanged
    }

    // Print the toggled string
    printf("%s", str);

    return 0;   // Successful program termination
}
