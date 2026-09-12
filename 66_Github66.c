// Q66- Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, i, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Find position where key should be inserted
    pos = n; // assume at the end
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert key
    arr[pos] = key;
    n++;

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
