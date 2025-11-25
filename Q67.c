/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, i, pos, key;

    // Read the number of elements in the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n+1]; // Make array one element larger for insertion

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position where element needs to be inserted and the element itself
    printf("Enter the position and element to insert: ");
    scanf("%d %d", &pos, &key);

    // Validate position: position should be between 1 and n+1 inclusive
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    // Shift elements from the end towards position to make room for new element
    // Starting from last element, moving each to the next index
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the given position (adjusted for 0-based index)
    arr[pos - 1] = key;

    // Increment the size of the array after insertion
    n = n + 1;

    // Print the updated array elements
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
