// Q105- Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Boyer-Moore Majority Vote Algorithm
    int candidate = -1, count = 0;
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = nums[i];
            count = 1;
        } else if(nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Verify candidate
    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate) count++;
    }

    if(count > n/2)
        printf("Majority element: %d\n", candidate);
    else
        printf("-1\n");

    return 0;
}
