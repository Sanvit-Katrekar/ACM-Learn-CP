#include <stdio.h>
#include <stdlib.h>

int main() {
    char *idno = (char *) malloc(14 * sizeof(char));
    float *cgpa = (float *) malloc(sizeof(float));
    printf("Enter your id number: ");
    scanf("%s", idno);
    printf("Enter your CGPA: ");
    scanf("%f", cgpa);
    printf("Your id number is %s, and your cgpa is %f\n", idno, *cgpa);
    return 0;
}