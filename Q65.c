/*Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n;       // Size of the array
    int arr[100]; // Array to store up to 100 elements (adjust size as needed)
    int key;     // The element to search for
    int low, high, mid; // Variables to keep track of the current search range in the array
    int foundIndex = -1; // Store index of found element, -1 means not found

    // Read the number of elements in the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read the sorted elements into the array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the key element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Initialize low and high pointers to cover entire array initially
    low = 0;
    high = n - 1;

    // Binary search algorithm starts here:
    // Continue searching while the search space is valid
    while (low <= high) {
        // Calculate mid index to split the current search range in half
        mid = low + (high - low) / 2;

        // Check if the middle element is the key
        if (arr[mid] == key) {
            foundIndex = mid; // Key found at index mid
            break;            // Exit the loop early since element is found
        } else if (arr[mid] < key) {
            // If the middle element is less than key,
            // discard the left half by moving low pointer ahead of mid
            low = mid + 1;
        } else {
            // If the middle element is greater than key,
            // discard the right half by moving high pointer before mid
            high = mid - 1;
        }
    }

    // Output the result of the search
    if (foundIndex == -1) {
        // Element was not found in the array
        printf("-1\n");
    } else {
        // Element found; print the index (0-based indexing)
        printf("Found at index %d\n", foundIndex);
    }

    return 0;
}
