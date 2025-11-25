/*Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, i, j, key;
    int found = 0; // Flag variable to indicate whether element to delete was found

    // Input the number of elements in the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &key);

    // Loop to find the element in the array
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1; // Element found, change flag
            break;     // Exit loop on first instance
        }
    }

    if(found) {
        // Shift all elements to the left starting from position of found element
        for(j = i; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        n = n - 1; // Decrement array size since one element is deleted

        // Print updated array after deletion
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        // Element to delete was not found in array
        printf("Element not found.\n");
    }

    return 0;
}
