# Insert an element in a sorted array at the appropriate position

#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int element = 35;
    int i = n - 1;

    while(i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    n++;

    for(int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
