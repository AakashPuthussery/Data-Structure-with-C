#include <stdio.h>

// Function to merge two sorted arrays into a third array
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[], int *mergedSize) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and compare elements to merge them into the merged array
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // If there are remaining elements in arr1, copy them to mergedArr
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2, copy them to mergedArr
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }

    // Set the size of the merged array
    *mergedSize = k;
}

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Size of the arrays
#define N1 5
#define N2 4
#define MergedN (N1 + N2)

int main() {
    int arr1[N1] = {1, 3, 5, 7, 9};
    int arr2[N2] = {2, 4, 6, 8};
    int mergedArr[MergedN];
    int mergedSize = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Display Arrays\n");
        printf("2. Merge Arrays\n");
        printf("3. Display Merged Array\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array 1: ");
                displayArray(arr1, N1);

                printf("Array 2: ");
                displayArray(arr2, N2);
                break;
            case 2:
                // Merge the two sorted arrays
                mergeArrays(arr1, N1, arr2, N2, mergedArr, &mergedSize);
                printf("Arrays merged successfully.\n");
                break;
            case 3:
                // Display the merged array
                printf("Merged Array: ");
                displayArray(mergedArr, mergedSize);
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

