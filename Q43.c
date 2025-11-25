#include <stdio.h>

int main() {
    int num, temp, digit, fact, sum = 0;

    // Asking the user to enter a number to check
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number to compare later
    temp = num;

    // Loop through each digit of the number
    while (temp > 0) {
        digit = temp % 10;    // Get the last digit

        // Calculate factorial of the digit
        fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;  // Multiply up to the digit
        }

        sum = sum + fact;     // Add factorial to the sum
        temp = temp / 10;     // Remove last digit
    }

    // Checking if sum of factorial of digits is same as original number
    if (sum == num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
