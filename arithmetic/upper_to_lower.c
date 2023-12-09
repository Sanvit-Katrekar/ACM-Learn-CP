#include <stdio.h>

int main() {
    char uppercase;
    printf("Enter an uppercase character: ");
    scanf("%c", &uppercase);
    if (uppercase < 'A' || uppercase > 'Z') {
        printf("Character is already in upper case!\n");
        return 1;
    }
    char lowercase = uppercase + ('a' - 'A');
    printf("%c in lowercase is %c\n", uppercase, lowercase);
}