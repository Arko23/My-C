#include<stdio.h>
#include <stdio.h>

int search_lcm(int x, int y);

int main()
{
    int a, b,LCM;
    scanf("%d%d", &a, &b);

    if (a > b)
        LCM =search_lcm(b, a);
    else
        LCM =search_lcm(a, b);

    printf("LCM of %d and %d = %d", a, b, LCM);

    return 0;
}

int search_lcm(int x, int y)
{
    static int mul= 0;

    mul += y;

    if ((mul % x == 0) && (mul % y == 0))
    {
        return mul;
    }
    else
    {
        return search_lcm(x, y);
    }
}