#include <stdio.h>

int num(int t1, int t2);

int main()
{
    int t1, t2, sum;
    scanf("%d %d", &t1,&t2);
    sum =num(t1, t2);
    printf("Sum of natural numbers from %d to %d=%d", t1, t2, sum);

    return 0;
}

int num(int t1, int t2)
{
    if (t1 == t2)
        return t1;
    else
        return t1 +num(t1 + 1, t2);
}