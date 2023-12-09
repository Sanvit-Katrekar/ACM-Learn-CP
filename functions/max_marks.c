#include <stdio.h>

int get_max(float course_marks[], int n) {
    float max = course_marks[0];
    for (int i = 1 ; i < n; i++) {
        if (course_marks[i] > max) {
            max = course_marks[i];
        }
    }
    return max;
}

int main() {

    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    float marks[n];

    for (int i = 0; i < n; i++) {
        printf("Enter marks for course number %d: ", i+1);
        scanf("%f", &marks[i]);
    }

    float result = get_max(marks, n);
    
    printf("The highest marks is: %.2f\n", result);

    return 0;
}

