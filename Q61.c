/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n, i, key, foundIndex = -1;

    // Read the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the key element to search for
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search for the key
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i; // Element found at index i
            break;          // Stop searching after finding the element
        }
    }

    // Print the result
    if (foundIndex == -1) {
        printf("-1\n");           // Element not found
    } else {
        printf("Found at index %d\n", foundIndex);  // Element found
    }

    return 0;
}
