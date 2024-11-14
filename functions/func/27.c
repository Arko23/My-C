#include <stdio.h>
#include <math.h>
void get_number_and_base();
void convert(int m, int p);
void show_converted_number(int x, int y, int z);
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
    if (base > 0 && base < 17)
    {
        convert(number, base);
    }
    else
    {
        printf("Base not within proper range.\n");
    }
    return;
}
void convert(int m, int p)
{
    int rem, div, value = 0, n, exp = 0;
    n = m;
    while (m != 0)
    {
        div = m / p;
        rem = m% p;
        m= div;
        value = value + rem * pow(10, exp);
        exp++;
    }
    show_converted_number(n, p, value);
    return;
}
void show_converted_number(int x, int y, int z)
{
    printf("number : %d \nbase : %d\nconverted_number : %d\n", x, y, z);
    return;
}