#include <stdio.h>
int find_cube(int a);

int main()
{
    int a;
    int x;
    scanf("%d", &a);
    x = find_cube(a);
    printf("cube of %d is %d", a, x);

    return 0;
}

int find_cube(int a)
{
    return (a * a * a);
}