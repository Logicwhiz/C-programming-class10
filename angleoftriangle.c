#include <stdio.h>

int main() {
    double base, height;
    printf("Enter the base and height of the triangle: ");
    scanf("%lf %lf", &base, &height);

    double area = 0.5 * base * height;

    printf("Area of the triangle is %.2lf\n", area);
    return 0;
}
