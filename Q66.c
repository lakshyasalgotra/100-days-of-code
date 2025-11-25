/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, i, key, pos;

    // Read the size of the sorted array
    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n+1]; // Declare array with one extra space for new element

    // Read the sorted elements into the array
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find the correct position to insert the key.
    // This is done by looping through the array from start till we find the
    // position where key is less than current element or at the end.
    pos = 0;
    while(pos < n && arr[pos] < key) {
        pos++;
    }

    // Shift elements rightward starting from the end to pos to make space for key
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the key at the found position
    arr[pos] = key;

    // Increment size of array after insertion
    n = n + 1;

    // Print the updated array after insertion
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
