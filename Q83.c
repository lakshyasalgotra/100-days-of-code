/*Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[100];           // Array to store the input string (max 99 characters)
    int vowels = 0;          // Counter for vowels
    int consonants = 0;      // Counter for consonants
    int i = 0;               // Index for looping through each character

    printf("Enter a string: ");
    scanf("%s", str);        // Read the input string (no spaces)

    // Loop through the string until the null character '\0' is found
    while (str[i] != '\0') {
        // Check if the current character is a letter (a-z or A-Z)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            // Check if the letter is a vowel (a, e, i, o, u; both uppercase and lowercase)
            if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
                str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
                vowels++;        // Increase vowel count
            } else {
                consonants++;    // Not a vowel, so it's counted as a consonant
            }
        }
        i++;                     // Move to the next character
    }

    // Print the results
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
