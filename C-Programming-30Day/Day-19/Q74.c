#include <stdio.h>

int main() {
    int mat1[2][2], mat2[2][2], result[2][2];
    int i, j;

    printf("Enter elements of the first matrix (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix (2x2):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("\nResultant Matrix after Subtraction:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}