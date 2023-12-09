#include <stdio.h>

int main() {
    const int ROWS = 3, COLS = 3;
    int mat1[ROWS][COLS], mat2[ROWS][COLS];
    int result[ROWS][COLS];

    printf("Enter matrix 1:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter matrix 2:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < ROWS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("\nResult addition matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}