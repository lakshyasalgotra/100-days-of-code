/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>

// Function to find GCD using Euclidean Algorithm
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main() {
    int num1, num2, gcd, lcm;
    
    // Read two numbers from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Make sure numbers are positive
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    
    // Calculate GCD
    gcd = findGCD(num1, num2);
    
    // Calculate LCM using formula: LCM * GCD = num1 * num2
    lcm = (num1 * num2) / gcd;
    
    // Print the LCM
    printf("%d\n", lcm);
    
    return 0;
}
