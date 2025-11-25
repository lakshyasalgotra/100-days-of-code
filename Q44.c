#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0; // To store the running total of the series

    // Ask the user how many terms to calculate
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 1; // First numerator
    int den = 1; // First denominator

    // Loop to calculate each term in the series and add it to sum
    for(i = 1; i <= n; i++) {
        if(i == 1) {
            sum = sum + 1; // First term is always 1
        } else {
            num = num + 2;   // Numerator increases by 2 for each term
            den = den + 2;   // Denominator also increases by 2
            sum = sum + (float)num / den; // Add current term to the sum
        }
    }

    // Show the approximate sum of the series
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
