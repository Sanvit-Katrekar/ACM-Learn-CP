#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    printf("Value of a is %d", a);
    printf("Value of b is %d", b);
    swap(&a, &b);
    printf("Value of a is %d", a);
    printf("Value of b is %d", b);
    return 0;
}