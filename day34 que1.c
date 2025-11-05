# Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int element = 25;
    int position = 2;

    for(int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
