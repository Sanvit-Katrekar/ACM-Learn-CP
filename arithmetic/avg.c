#include <stdio.h>

int main() {
    int n = 6;

    float course_marks[n];

    for (int i = 0; i < n; i++) {
        printf("Enter marks for course number %d: ", i+1);
        scanf("%f", &course_marks[i]);
    }
    
    float sum = 0;
    for (int i = 0 ; i < n; i++) {
        sum += course_marks[i];
    }
    float avg = sum / n;
    printf("The average is: %.2f", avg);

    return 0;
}

