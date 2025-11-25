/*Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0;
    int oddCount = 0;

    // Read the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Read the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array to count even and odd numbers
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment even count if element is even
        } else {
            oddCount++; // Increment odd count if element is odd
        }
    }

    // Print the counts
    printf("Even=%d, Odd=%d\n", evenCount, oddCount);

    return 0;
}
