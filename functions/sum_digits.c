#include <stdio.h>

int calc_sum_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num%10;
        num /= 10;
    }
    return sum;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = calc_sum_digits(num);
    printf("Sum of digits is: %d\n", sum);
    return 0;
}