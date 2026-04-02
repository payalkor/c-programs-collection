//random array sort using haep
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to heapify a subtree rooted at index `i`
void heapify(int arr[], int n, int i) {
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    // Check if left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Check if right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Swap and heapify the affected subtree
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

// Function to perform Heap Sort
void heapSort(int arr[], int n) {
    // Build a max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from the heap one by one
    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of random elements to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of elements must be positive.\n");
        return 1;
    }

    int arr[n];

    // Seed random number generator
    srand(time(0));

    // Generate random elements
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Generate random numbers between 0 and 99
    }

    printf("Original array:\n");
    printArray(arr, n);

    // Sort the array using Heap Sort
    heapSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}


//Chat GPT☝🏻hohk
fogg a