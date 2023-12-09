#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    int sum = 0;
    while (temp != 0) {
        sum += pow(temp%10, 3);
        temp /= 10;
    }
    printf("Sum of digits is: %d\n", sum);
    if (sum == num) {
        printf("%d is an armstrong number!\n", num);
    }
    else {
        printf("%d is not an armstrong number!\n", num);
    }
    return 0;
}