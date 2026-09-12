// Q70- Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate): ");
    scanf("%d", &k);

    // Normalize k (in case k > n)
    k = k % n;

    // Rotate using reversal method
    // Step 1: Reverse entire array
    for (i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    // Step 2: Reverse first k elements
    for (i = 0; i < k/2; i++) {
        int temp = arr[i];
        arr[i] = arr[k-1-i];
        arr[k-1-i] = temp;
    }

    // Step 3: Reverse remaining n-k elements
    for (i = 0; i < (n-k)/2; i++) {
        int temp = arr[k+i];
        arr[k+i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    // Print rotated array
    printf("Array after rotating right by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
