#include <stdio.h>  // For input/output functions

int main() {
    char str[100];  // Array to hold input string (up to 99 chars + null terminator)

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string including spaces

    // Loop through each character until null terminator '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        // If current character is a space, replace it with a hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    // Print the modified string
    printf("%s", str);

    return 0;  // Indicate successful termination
}
