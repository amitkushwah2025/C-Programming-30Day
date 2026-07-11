#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, sum = 0;

    printf("Enter elements of the matrix (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        sum = sum + matrix[i][i];
    }

    printf("\nSum of the diagonal elements: %d\n", sum);

    return 0;
}
