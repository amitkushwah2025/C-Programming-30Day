#include <stdio.h>

int main() {
    int arr[9], i;
    int sum = 0, total = 0, missing;

    printf("Enter 9 elements (numbers from 1 to 10 with one missing):\n");

    for(i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = 10 * 11 / 2;   // Sum of numbers from 1 to 10
    missing = total - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}