#include <stdio.h>

int main() {
    int arr[10], i, key, count = 0;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &key);

    for(i = 0; i < 10; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}