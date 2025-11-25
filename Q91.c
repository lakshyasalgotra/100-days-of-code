#include <stdio.h>   // For input/output functions
#include <ctype.h>   // For character functions (tolower)

int main() {
    char str[100];   // Array to hold the input string
    int j = 0;       // Index for the new string without vowels

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Loop through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase to ease vowel checking
        char ch = tolower(str[i]);

        // Check if the character is NOT a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && str[i] != '\n') {
            str[j++] = str[i];  // Keep the character and update new string index
        }
    }

    str[j] = '\0'; // Null terminate the new string

    // Print the string after removing vowels
    printf("%s\n", str);

    return 0; // Successful program termination
}
