#include <stdio.h>

void creation();
void insertion();
// void deletion();
// void traversal();
void display();

int a[20], n, p, i, item;

int main() {
    int c;
    while (1) {
        printf("Menu\n");
        printf("1. Creation\n2. Insertion\n3. Deletion\n4. Traversal\n5.Display\n6. Exit\n");
        scanf("%d", &c);

        switch (c) {
            case 1:
                creation();
                break;
            case 2:
                 insertion();
                break;
            // case 3:
            //     deletion();
            //     break;
            // case 4:
            //     traversal();
            //     break;
            case 5:
                display();
            case 6:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

void creation() {
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array created successfully.\n");
}

// Uncomment and implement the other functions as needed

void insertion() {
    int element;
    printf("Enter the position to insert: ");
    scanf("%d", &p);

    if (p < 1 || p > n + 1) {
        printf("Invalid position for insertion.\n");
        return;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to make space for the new element
    for (i = n; i >= p; --i) {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[p - 1] = element;

    // Update the size of the array
    n++;

    printf("Element inserted successfully.\n");
}

// void deletion() {
//     // Implementation for deletion
// }

// void traversal() {
//     // Implementation for traversal
// }

void display() {
    printf("Array elements are:\n");
    for (i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

