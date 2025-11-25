/*
Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    
    // Read the input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Make sure number is positive
    if (num < 0) {
        num = -num;
    }
    
    // Calculate sum of digits
    while (num > 0) {
        remainder = num % 10;  // Get last digit
        sum += remainder;      // Add it to sum
        num = num / 10;        // Remove last digit
    }
    
    // Print the sum
    printf("%d\n", sum);
    
    return 0;
}
