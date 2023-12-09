#include <stdio.h>

int main() {
    int id;
    char name[50];
    float marks;
    char grade;
    char discipline[50];
    printf("Enter your id number: ");
    scanf("%d", &id);
    // Issue with string input?
    getchar();
    printf("Enter your name: ");
    gets(name);
    printf("Enter your discipline: ");
    gets(discipline);
    printf("Enter your marks: ");
    scanf("%f", &marks);
    // Issue with character input?
    getchar();
    printf("Enter your grade: "); 
    grade = getchar();

    printf("\nYou have entered id as %d\n", id);
    printf("You have entered name as ");
    puts(name);
    printf("You have entered discipline as ");
    puts(discipline);
    printf("You have entered marks as %f\n", marks);
    printf("You have entered grade as %c\n", grade);
    return 0;
}