/*Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Read the number of elements in the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array with size n

    // Read the elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of the array elements
    for (i = 0; i < n; i++) {
        sum += arr[i]; // Add current element to sum
    }

    // Display the sum
    printf("%d\n", sum);

    return 0;
}
