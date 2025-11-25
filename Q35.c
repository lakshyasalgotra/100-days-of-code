/*
Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10
*/

#include <stdio.h>

int main() {
    int num, i;
    
    // Read the input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Factors of %d are: ", num);
    
    // Loop from 1 to num to find factors
    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);  // Print the factor
        }
    }
    
    printf("\n");
    
    return 0;
}
