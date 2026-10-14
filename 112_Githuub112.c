// Q112- Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

// Function to calculate maximum subarray sum using Kadane's Algorithm
int maxSubarraySum(int arr[], int n) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        // Decide to either extend the current subarray or start fresh from arr[i]
        if (arr[i] > current_sum + arr[i]) {
            current_sum = arr[i];
        } else {
            current_sum = current_sum + arr[i];
        }

        // Update max_sum if current_sum is larger
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    // Example 1: Mixed positive and negative numbers
    int arr1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Maximum Subarray Sum: %d\n", maxSubarraySum(arr1, n1)); 
    // Output: 6 (Subarray: [4, -1, 2, 1])

    // Example 2: All negative numbers
    int arr2[] = {-8, -3, -6, -2, -5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Maximum Subarray Sum (All Negative): %d\n", maxSubarraySum(arr2, n2)); 
    // Output: -2 (Least negative element)

    return 0;
}