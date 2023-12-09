#include <stdio.h>

int main() {
    int id;
    char name[50];
    float marks;
    char grade;
    char discipline[50];
    printf("Enter your id number: ");
    scanf("%d", &id);
    printf("Enter your name: "); // Issue with string input?
    scanf("%s", name);
    printf("Enter your discipline: ");
    scanf("%s", discipline);
    printf("Enter your marks: ");
    scanf("%f", &marks);
    printf("Enter your grade: "); 
    scanf(" %c", &grade); // Why the space before %c?

    printf("\nEntered id as %d\n", id);
    printf("Entered name as %s\n", name);
    printf("Entered discipline as %s\n", discipline);
    printf("Entered marks as %f\n", marks);
    printf("Entered grade as %c\n", grade);

    return 0;
}