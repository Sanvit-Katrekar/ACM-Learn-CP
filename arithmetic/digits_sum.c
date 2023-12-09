#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    int sum = 0;
    while (temp != 0) {
        sum += temp%10;
        temp /= 10;
    }
    printf("Sum of digits is: %d\n", sum);
    return 0;
}