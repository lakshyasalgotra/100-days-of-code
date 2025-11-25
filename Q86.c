/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[100];       // Array to hold the input string (max 99 chars)
    int length = 0;      // Variable to hold string length
    int i, j;            // Loop counters
    int isPalindrome = 1; // Flag to indicate if string is palindrome (1 = yes, 0 = no)

    printf("Enter a string: ");
    scanf("%s", str);    // Read input string (no spaces)

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    // Check palindrome by comparing characters from ends
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0; // Found mismatch, not palindrome
            break;
        }
    }

    // Print result
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
