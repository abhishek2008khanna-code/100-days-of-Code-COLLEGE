// Q57- Find the sum of array elements.

#include <stdio.h>

int main() {
    int arr[100];   // array with max size 100
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // read each element
        sum += arr[i];          // add to sum directly
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
