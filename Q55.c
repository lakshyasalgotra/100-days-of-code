/*
Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    // Ask user for the upper limit
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop through each number from 2 to n (1 is not prime)
    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume the number is prime

        // Check if i is divisible by any number other than 1 and itself
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break; // Exit loop early
            }
        }

        // If isPrime is still 1, then i is prime
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n"); // New line after printing all primes

    return 0;
}
