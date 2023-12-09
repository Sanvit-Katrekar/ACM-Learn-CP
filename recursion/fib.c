#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        printf("fib(%d) = 1\n", n);
        return 1;
    }
    printf("Calculating fib(%d) = fib(%d) + fib(%d)\n", n, n-1, n-2);
    return fib(n-1) + fib(n-2);
}
int main() {
    int n = 5;
    printf("Fibonacci term no. %d is: %d\n", n, fib(n));
    return 0;
}