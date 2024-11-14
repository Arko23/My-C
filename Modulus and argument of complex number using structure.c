#include <stdio.h>
#include <math.h>
struct complex
{
    float real;
    float imaginary;
};
int main()
{
    struct complex value;
    scanf("%f", &value.real);
    scanf("%f", &value.imaginary);
    float mod, arg;
    mod = sqrt(pow(value.real, 2) + pow(value.imaginary, 2));
    arg = atan(value.imaginary / value.real);
    printf("Modulus : %.2f\nArgument :%.2f", mod, arg);
    return 0;
}