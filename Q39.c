/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main() {
    int num, remainder, product = 1, foundOdd = 0;
    
    // Read the input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Make sure number is positive
    if (num < 0) {
        num = -num;
    }
    
    // Process each digit
    while (num > 0) {
        remainder = num % 10;  // Extract last digit
        
        // Check if digit is odd
        if (remainder % 2 != 0) {
            product *= remainder;  // Multiply with product
            foundOdd = 1;          // Mark that odd digit found
        }
        
        num = num / 10;          // Remove last digit
    }
    
    // If no odd digits found, product is 1 (as per problem statement)
    if (!foundOdd) {
        product = 1;
    }
    
    // Print the product of odd digits
    printf("%d\n", product);
    
    return 0;
}
