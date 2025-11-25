/*Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i;
    int max1, max2;

    // Read the number of elements in the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array with size n

    // Read the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the two largest elements as very small numbers
    max1 = -2147483648; // Smallest possible int
    max2 = -2147483648;

    // Loop through array to find the largest and second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            // Update second largest before updating largest
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            // Update second largest if current is smaller than max1 but greater than max2
            max2 = arr[i];
        }
    }

    // If max2 remains the initialized large negative number, it means no second largest exists
    if (max2 == -2147483648) {
        printf("No second largest element.\n");
    } else {
        printf("%d\n", max2); // Print the second largest element
    }

    return 0;
}
