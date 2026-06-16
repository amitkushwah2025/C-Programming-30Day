#include <stdio.h>

int main() {
    int n, bin = 0, p = 1, r;

    printf("Enter the number");
    scanf("%d", &n);

    while(n > 0) {
        r = n % 2;
        bin = bin + r * p;
        p = p * 10;
        n = n / 2;
    }

    printf("%d", bin);

    return 0;
}