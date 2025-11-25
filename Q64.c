/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    int number, temp;
    int digitCount[10] = {0};  // Array to store frequency of digits 0-9. Initialize all to 0.
    int maxCount = 0;          // Variable to keep track of highest frequency found so far.
    int maxDigit = -1;         // Variable to store the digit with highest frequency.

    // Prompt user and read input integer
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Handle negative numbers by making number positive for counting digits.
    if (number < 0) {
        number = -number;
    }

    temp = number; // Temporary variable to manipulate without losing original number.

    // Loop to count frequency of each digit in the number
    while (temp > 0) {
        int digit = temp % 10;       // Extract the last digit of temp
        digitCount[digit]++;         // Increment count for this digit in the digitCount array
        temp = temp / 10;            // Remove the last digit by integer division
    }

    // Loop to find the digit with the maximum occurrence
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) { // If current digit count exceeds maxCount
            maxCount = digitCount[i];    // Update maxCount
            maxDigit = i;                // Update maxDigit to current digit
        }
    }

    // Display the digit that occurs most frequently in the given number
    printf("%d\n", maxDigit);

    return 0;
}
