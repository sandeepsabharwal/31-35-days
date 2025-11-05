# Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long num = 1203405050;
    int digit_count[10] = {0};

    while(num > 0) {
        int digit = num % 10;
        digit_count[digit]++;
        num /= 10;
    }

    int max = digit_count[0], most_frequent = 0;
    for(int i = 1; i < 10; i++) {
        if(digit_count[i] > max) {
            max = digit_count[i];
            most_frequent = i;
        }
    }

    printf("Most frequent digit: %d\n", most_frequent);
    printf("It occurs %d times\n", max);
    return 0;
}
