#include <stdio.h>
#include <math.h>

int rev(int x);

int main()
{
    int a, reverse;

    printf("Enter any number: ");
    scanf("%d", &a);

    reverse = rev(a);

    printf("Reverse of %d : %d", a, reverse);

    return 0;
}

int rev(int x)
{

    int value = (int)log10(x);

    if (x == 0)
        return 0;

    return ((x % 10 * pow(10, value)) + rev(x / 10));
}