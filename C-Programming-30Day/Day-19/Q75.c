#include <stdio.h>

int main() {
    int matrix[2][3], transpose[3][2];
    int i, j;

    printf("Enter elements of the matrix (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix (2x3):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTransposed Matrix (3x2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}