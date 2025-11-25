#include <stdio.h>  // For input/output functions

int main() {
    char str[100];    // Array to hold input string (up to 99 chars + null terminator)
    char ch;          // Character to find frequency of
    int count = 0;    // Counter for frequency

    // Prompt the user to enter the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    // Prompt the user to enter the character to count
    printf("Enter the character to find frequency of: ");
    scanf("%c", &ch);

    // Loop through each character until the null terminator '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;  // Increment count if the character matches
        }
    }

    // Print the frequency of the character
    printf("%d\n", count);

    return 0;  // Indicate successful termination
}
