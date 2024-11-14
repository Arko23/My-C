#include <stdio.h>
#include <math.h>
void get_number_and_base();
void convert(int a, int b);
void show_converted_number(int w, int x, int y);
int main()
{
    get_number_and_base();
    return 0;
}
void get_number_and_base()
{
    int number, base;
    printf("Enter Number & Base :\n");
    scanf("%d %d", &number, &base);
    if (base > 1 && base < 17)
    {
        convert(number, base);
    }
    else
    {
        printf("Base not within proper range.\n");
    }
    return;
}
void convert(int a, int b)
{
    int rem, div, value = 0, n, exp = 0;
    n = a;
    while (a != 0)
    {
        div = a / b;
        rem = a % b;
        a = div;
        value = value + rem * pow(10, exp);
        exp++;
    }
    show_converted_number(n, b, value);
    return;
}
void show_converted_number(int w, int x, int y)
{
    printf("number : %d \nbase : %d\nconverted_number : %d\n", w, x, y);
    return;
}