#include <stdio.h>   // For input/output functions

int main() {
    char str[100];         // Array to hold the input string
    int freq[26] = {0};    // Frequency array for 26 lowercase alphabets initialized to 0

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the input string including spaces

    // Loop through the string characters
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Consider only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;          // Increment the frequency of the character
            if (freq[ch - 'a'] == 2) { // If this character repeats (frequency becomes 2)
                printf("%c\n", ch);    // Print the first repeating character
                return 0;              // Exit the program after printing the first repeating char
            }
        }
    }

    // If no repeating lowercase character found
    printf("No repeating lowercase alphabet found\n");
    return 0;  // Successful termination
}
