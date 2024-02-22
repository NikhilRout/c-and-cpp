#include <stdio.h>
#include <stdlib.h>

int main() {
    int length; // Variable to store the length of the array
    int *arr; // Pointer to store the base address of the dynamically allocated memory

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    // Dynamically allocate memory for an array of 'length' integers
    arr = (int *)malloc(length * sizeof(int));
    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1; // Exiting the program with an error code
    }

    printf("Enter %d elements:\n", length);
    // Input elements into the dynamically allocated array using pointers
    for (int i = 0; i < length; i++) {
        scanf("%d", arr + i); // Use pointer arithmetic to fill the array
    }

    printf("Elements in the array are: ");
    // Display elements of the dynamically allocated array using pointers
    for (int i = 0; i < length; i++) {
        printf("%d ", *(arr + i)); // Use pointer arithmetic to access elements
    }
    printf("\n");

    // Free dynamically allocated memory when it's no longer needed
    free(arr);

    return 0;
}