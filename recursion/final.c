#include <stdio.h>

int fact(int n) {
    if (n <= 1) {
        printf("fact(%d) = 1\n", n);
        return 1;
    }
    printf("Calculating fact(%d) = %d * fact(%d)\n", n, n, n-2);
    return n * fact(n - 2);

}
int main() {
    int n = 10;
    int result = fact(n);
    printf("Result is: %d\n", result);
    return 0;
}