/*Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

// Function to reverse elements of an array from index 'start' to 'end'
void reverse(int arr[], int start, int end) {
    int temp;
    while (start < end) {
        // Swap elements at 'start' and 'end'
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers closer
        start++;
        end--;
    }
}

int main() {
    int n, i, k;

    // Read the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number of positions to rotate
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);

    // Normalize k in case it's greater than n
    k = k % n;

    // Rotate the array to right by k is equivalent to:
    // Reverse the whole array
    reverse(arr, 0, n - 1);
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining n-k elements
    reverse(arr, k, n - 1);

    // Print the rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
