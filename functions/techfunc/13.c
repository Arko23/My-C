#include<stdio.h>
void e_v(int x, int y);

int main()
{
    int a, b;
    scanf("%d %d", &a,&b);
       printf("Even/odd Numbers from %d to %d are: ", a, b);
    e_v(a, b);
    return 0;
}

void e_v(int x, int y)
{
    if (x > y)
        return;

    printf("%d, ", x);

    e_v(x + 2, y);
}