# Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0], second = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second != -1)
        printf("Second largest element: %d\n", second);
    else
        printf("No second largest element found\n");

    return 0;
}
