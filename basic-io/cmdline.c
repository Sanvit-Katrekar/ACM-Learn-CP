#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int id = atoi(argv[1]);
    char name[50];
    strcpy(name, argv[2]);
    char discipline[50];
    strcpy(discipline, argv[3]);
    float marks = atof(argv[4]);
    char grade = argv[5][0];
    printf("No. of arguments: %d\n", argc);
    printf("Printing arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    printf("\nEntered id as %d\n", id);
    printf("Entered name as %s\n", name);
    printf("Entered discipline as %s\n", discipline);
    printf("Entered marks as %f\n", marks);
    printf("Entered grade as %c\n", grade);

    return 0;
}