// Q108- Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Subarray size cannot be greater than array size!\n");
        return 0;
    }

    // Step 1: Calculate sum of first k elements
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int max_sum = sum;

    // Step 2: Use sliding window
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];  // slide window
        if (sum > max_sum) {
            max_sum = sum;
        }
    }

    printf("Maximum sum of subarrays of size %d = %d\n", k, max_sum);

    return 0;
}
