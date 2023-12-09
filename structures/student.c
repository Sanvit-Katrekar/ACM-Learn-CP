#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    float cgpa;
};

void main() {
    int i;
    struct Student st[3];
    int n = 3;
    for (int i = 0; i < n; i++) {
        printf("Student %d's name: ", i+1);
        gets(st[i].name);
        printf("Student %d's age: ", i+1);
        scanf("%d", &st[i].age);
        printf("Student %d's CGPA: ", i+1);
        scanf("%f", &st[i].cgpa);
        getchar();
    }

    printf("\nPrinting all student details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d's name: %s\n", i+1, st[i].name);
        printf("Student %d's age: %d\n", i+1, st[i].age);
        printf("Student %d's CGPA: %f\n", i+1, st[i].cgpa);
    }
}