#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void heapify(int arr[], int n, int i) {
    int largest = i;  // Initialize largest as root
    int left = 2 * i + 1;  // Left child index
    int right = 2 * i + 2; // Right child index

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        int temp=arr[largest];
        arr[largest]=arr[i];
        arr[i]=temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Function to perform heapsort
void heapsort(int arr[], int n) {
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract elements from the heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to the end
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    int n;

    // Seed the random number generator
    srand(time(NULL));

    // Take input for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Generate n random elements
    int arr[n];
    printf("Generated random elements:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Random number between 0 and 99
        printf("%d ", arr[i]);
    }
    printf("\n");
    heapsort(arr,n);
    printf("\n Sorted..");
    {
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    // Sort the array us
}