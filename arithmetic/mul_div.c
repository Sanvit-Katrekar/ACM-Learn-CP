#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", & num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator: ");
    getchar();
    char operator = getchar();
    float result;

    switch (operator) {
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 * 1.0 / num2; // Issue with division? Hmm.. int/int form maybe?
            break;
        default:
            break;
    }
    printf("%d %c %d = %f\n", num1, operator, num2, result);
    return 0;
}