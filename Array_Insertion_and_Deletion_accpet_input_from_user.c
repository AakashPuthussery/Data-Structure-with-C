#include <stdio.h>
#define N 10
// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specified position in the array
void insertElement(int arr[], int *size) {
    int position, element;

    // Check if the array is full
    if (*size >= N) {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position > *size) {
        printf("Invalid position. Insertion aborted.\n");
        return;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to make space for the new element
    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[position] = element;

    // Increment the size of the array
    (*size)++;

    printf("Element %d inserted at position %d.\n", element, position);
}

// Function to delete an element at a specified position in the array
void deleteElement(int arr[], int *size) {
    int position;

    // Check if the array is empty
    if (*size == 0) {
        printf("Array is empty. Cannot delete element.\n");
        return;
    }

    printf("Enter the position to delete the element: ");
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position >= *size) {
        printf("Invalid position. Deletion aborted.\n");
        return;
    }

    // Shift elements to fill the gap left by the deleted element
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    (*size)--;

    printf("Element deleted from position %d.\n", position);
}

// Size of the array


int main() {
    int arr[N];
    int size = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                insertElement(arr, &size);
                break;
            case 3:
                deleteElement(arr, &size);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

