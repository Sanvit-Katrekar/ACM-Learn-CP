#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age;
    float cgpa;
};

void read_values(struct Student *student, int i) {
    printf("Student %d's name: ", i+1);
    gets(student->name);
    printf("Student %d's age: ", i+1);
    scanf("%d", &student->age);
    printf("Student %d's CGPA: ", i+1);
    scanf("%f", &student->cgpa);
    getchar();
}

int main() {
    int i;
    struct Student st[3];
    int n = 3;
    for (int i = 0; i < n; i++) {
        read_values(&st[i], i);
    }

    printf("\nPrinting all student details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d's name: %s\n", i+1, st[i].name);
        printf("Student %d's age: %d\n", i+1, st[i].age);
        printf("Student %d's CGPA: %f\n", i+1, st[i].cgpa);
    }
}