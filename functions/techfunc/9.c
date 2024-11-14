#include <stdio.h>
#include <math.h>

double D_m(double radius);
double C_m(double radius);
double F_area(double radius);

int main()
{
    float radius, area, circum, diameter;

    printf("radius of a circle : ");
    scanf("%f", &radius);

    diameter =D_m (radius);
    circum = C_m (radius);
    area = F_area(radius);

    printf("\n Diameter Of a Circle = %.2f\n", diameter);
    printf(" circum Of a Circle = %.2f\n", circum);
    printf(" Area Of a Circle = %.2f\n", area);

    return 0;
}

double D_m(double radius)
{
    return 2 * radius;
}

double C_m(double radius)
{
    return 2 * 3.14 * radius;
}
double F_area(double radius)
{
    return 3.14 * radius * radius;
}