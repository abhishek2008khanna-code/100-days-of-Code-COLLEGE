// Q56- Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int arr[100];   // array with max size 100
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // read each element
    }

    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // print each element
    }

    return 0;
}
