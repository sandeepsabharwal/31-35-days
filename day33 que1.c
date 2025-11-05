# Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;
    int low = 0, high = n - 1, mid;
    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == target) {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        } else if(arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if(!found)
        printf("Element not found\n");

    return 0;
}
