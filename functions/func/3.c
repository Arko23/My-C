#include <stdio.h>
void chk(int n);
int main()
{
    int n;
    scanf("%d", &n);
    checker(n);
    return 0;
}
void chk(int n)
{
    if (n% 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return;
}