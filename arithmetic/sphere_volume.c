#include <stdio.h>
#include <math.h>

int main() {
    double radius;
    printf("Enter radius of sphere: ");
    scanf("%lf", &radius);
    double volume = (4.0/3) * M_PI * pow(radius, 3);
    printf("Volume of sphere = %f\n", volume);
}