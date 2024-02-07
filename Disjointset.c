#include <stdio.h>

#define MAX_SIZE 100

int parent[MAX_SIZE];

// Initialize sets
void initialize(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
}

// Find operation to determine the representative element of the set
int find(int x) {
    if (parent[x] == x) {
        return x;
    }
    return find(parent[x]);
}

// Union operation to merge two sets
void unionSets(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX != rootY) {
        parent[rootX] = rootY;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    initialize(n);

    int choice, x, y;
    do {
        printf("\nOperations:\n");
        printf("1. Create Set\n");
        printf("2. Union (Merge) Sets\n");
        printf("3. Find Representative Element\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to create a set: ");
                scanf("%d", &x);
                if (x >= 0 && x < n) {
                    // Create a set with a single element
                    parent[x] = x;
                    printf("Set with element %d created.\n", x);
                } else {
                    printf("Invalid element index.\n");
                }
                break;

            case 2:
                printf("Enter elements to union (merge) sets: ");
                scanf("%d %d", &x, &y);
                if (x >= 0 && x < n && y >= 0 && y < n) {
                    unionSets(x, y);
                    printf("Sets containing elements %d and %d merged.\n", x, y);
                } else {
                    printf("Invalid element index(s).\n");
                }
                break;

            case 3:
                printf("Enter an element to find its representative element: ");
                scanf("%d", &x);
                if (x >= 0 && x < n) {
                    int representative = find(x);
                    printf("The representative element of set containing %d is %d.\n", x, representative);
                } else {
                    printf("Invalid element index.\n");
                }
                break;

            case 4:
                printf("Quitting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}
