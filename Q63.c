/*Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n1, n2; // Variables to hold sizes of the two input arrays
    int i;

    // Input the size of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int arr1[n1]; // Declare first array of size n1

    // Input the elements of first array
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int arr2[n2]; // Declare second array of size n2

    // Input the elements of second array
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Declare new array of size equal to sum of two arrays
    int merged[n1 + n2];

    // Copy elements of first array to merged array
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of second array to merged array starting from after last element of first array
    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print the merged array elements sequentially separated by a space
    printf("Merged array elements:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n"); // Print newline for clean output

    return 0;
}
