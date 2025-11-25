/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char str[100];     // Array to store the input string (max 99 chars)
    char rev[100];     // Array to store the reversed string
    int length = 0;    // Variable to hold the length of the string
    int i;

    printf("Enter a string: ");
    scanf("%s", str);  // Read the input string without spaces

    // Calculate length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }
    rev[length] = '\0';  // Null-terminate the reversed string

    // Print the reversed string
    printf("Reversed string: %s\n", rev);

    return 0;
}
