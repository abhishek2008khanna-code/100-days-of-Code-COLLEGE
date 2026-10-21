// Q119- Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[1000] = {0}; // Adjust size if needed

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        freq[arr[i]]++;

        if(freq[arr[i]] == 2) {
            printf("Repeated element = %d\n", arr[i]);
            break;
        }
    }

    return 0;
}