#include <stdio.h>

int main() {
    const int ROWS1 = 3, COLS1 = 3;
    const int ROWS2 = 3, COLS2 = 3;
    int mat1[ROWS1][COLS1], mat2[ROWS2][COLS2];

    if (COLS1 != ROWS2) {
        printf("Cannot multiply matrices!\n");
        return -1;
    }

    const int RESULT_ROWS = ROWS1;
    const int RESULT_COLS = COLS2;

    int result[RESULT_ROWS][RESULT_COLS];

    printf("Enter matrix 1:\n");
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter matrix 2:\n");
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < RESULT_ROWS; i++) {
        for (int j = 0; j < RESULT_COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nResult multiplied matrix:\n");
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}