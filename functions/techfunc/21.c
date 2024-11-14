#include <stdio.h>
#include <math.h>

int revn(int n);
int palindrom(int n);

int main()
{
    int n;

    printf("Enter num: ");
    scanf("%d", &n);

    if (palindrom(n) == 1)
    {
        printf("%d palindrome\n", n);
    }
    else
    {
        printf("%d  NOT .\n", n);
    }

    return 0;
}

int palindrom(int n)
{

    if (n == revn(n))
    {
        return 1;
    }

    return 0;
}

int revn(int n)
{

    int digit = (int)log10(n);

    if (n == 0)
        return 0;

    return ((n % 10 * pow(10, digit)) + revn(n / 10));
}