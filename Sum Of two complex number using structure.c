#include <stdio.h>
#include <math.h>
struct complex
{
    float real;
    float imaginary;
};
int main()
{
    struct complex value1, value2, value3, value4;
    printf("First complex number :\n");
    scanf("%f", &value1.real);
    scanf("%f", &value1.imaginary);
    printf("Second complex number :\n");
    scanf("%f", &value2.real);
    scanf("%f", &value2.imaginary);
    value3.real = value1.real + value2.real;
    value3.imaginary = value1.imaginary + value2.imaginary;
    if (value3.imaginary > 0)
        printf("Sum of the complex numbers: %.2f+%.2fi\n", value3.real, value3.imaginary);
    else
        printf("Sum of the complex numbers: %.2f%.2fi\n", value3.real, value3.imaginary);

    value4.real = value1.real - value2.real;
    value4.imaginary = value1.imaginary - value2.imaginary;
    if (value4.imaginary > 0)
        printf("Subtraction of the complex numbers: %.2f+%.2fi\n", value4.real, value4.imaginary);
    else
        printf("Subtraction of the complex numbers: %.2f%.2fi\n", value4.real, value4.imaginary);

    return 0;
}