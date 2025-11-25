/*
Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/

#include <stdio.h>

// Function to find GCD using Euclidean Algorithm
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

int main() {
    int num1, num2, gcd;
    
    // Read two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Make sure numbers are positive
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    
    // Calculate the GCD
    gcd = findGCD(num1, num2);
    
    // Print the GCD value
    printf("%d\n", gcd);
    
    return 0;
}
