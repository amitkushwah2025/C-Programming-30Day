#include <stdio.h>

int main() {
    int x, n, i, result = 1;

    printf("Enter the the value of x & n");
    scanf("%d%d", &x, &n);

    for(i = 1; i <= n; i++) {
        result = result * x;
    }

    printf("%d", result);

    return 0;
}