#include <stdio.h>

int power(int x, int n) {
    if (n == 1) {
        printf("%d^1 = %d\n", x, x);
        return x;
    }
    printf("Calculating %d^%d = %d * %d^%d\n", x, n, x, x, n-1);
    return x * power(x, n-1);
}
int main() {
    int result = power(2, 3);
    printf("The result is: %d\n", result);
    return 0;
}