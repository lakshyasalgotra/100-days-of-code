/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, lastDigit, firstDigit, digits, swappedNum, middlePart, power;
    
    // Read the input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle single digit case (no swap needed)
    if (num >= 0 && num < 10) {
        printf("%d\n", num);
        return 0;
    }
    
    // Calculate number of digits in num
    digits = (int)log10(num);  // digits index from 0, so log10 + 1 gives total digits
    
    lastDigit = num % 10;                  // Extract last digit
    firstDigit = num / (int)pow(10, digits);  // Extract first digit
    
    // Extract middle part of the number (excluding first and last digit)
    middlePart = (num % (int)pow(10, digits)) / 10;
    
    // Calculate power for placing lastDigit at the front
    power = (int)pow(10, digits);
    
    // Construct swapped number
    swappedNum = lastDigit * power + middlePart * 10 + firstDigit;
    
    // Print swapped number
    printf("%d\n", swappedNum);
    
    return 0;
}
