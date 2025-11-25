//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;           // stores the total sum
    int num = 2;               // numerator starts at 2
    int den = 3;               // denominator starts at 3

    // Ask user for the number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Loop to add each term
    for (i = 1; i <= n; i++) {
        // add current term to sum
        sum = sum + (float)num / den;

        // For next term, increase numerator by 2 and denominator by 4
        num = num + 2;
        den = den + 4;
    }

    // Print the approximate sum with 2 decimal places
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
