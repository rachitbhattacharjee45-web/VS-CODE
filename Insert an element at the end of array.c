#include <stdio.h>

int main() {
    int arr[100] = {1, 2, 3, 4, 5}; // Pre-allocated space
    int n = 5; // Current size
    int element = 6;

    // Insert at the end
    arr[n] = element;
    n++;

    // Print updated array
    printf("Updated array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
