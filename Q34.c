/*
Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/

#include <stdio.h>

int main() {
    int num, i, flag = 0;

    // Read the input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 1;  // Numbers less than or equal to 1 are not prime
    } else {
        // Check divisibility from 2 to num-1
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                flag = 1;  // Found a divisor, so not prime
                break;
            }
        }
    }

    // Print result based on flag
    if (flag == 0) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}
