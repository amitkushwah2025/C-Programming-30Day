#include <stdio.h>

int main() {
    int bin, dec = 0, p = 1, r;

    printf("Enter the Binary no");
    scanf("%d", &bin);

    while(bin > 0) {
        r = bin % 10;
        dec = dec + r * p;
        p = p * 2;
        bin = bin / 10;
    }

    printf("%d", dec);

    return 0;
}