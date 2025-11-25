/*Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if two strings are anagrams
int areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};  // Array to store character counts (ASCII assumed)
    int i;

    // If lengths differ, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0; // Not anagrams
    }

    // Count characters in first string
    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)tolower(str1[i])]++;  // Convert to lowercase for case-insensitivity
    }

    // Subtract character counts based on second string
    for (i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)tolower(str2[i])]--;
    }

    // Check if all counts returned to zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;  // Not anagrams
        }
    }

    return 1;  // Strings are anagrams
}

int main() {
    char str1[100], str2[100];

    // Read two strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Check and print result
    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
