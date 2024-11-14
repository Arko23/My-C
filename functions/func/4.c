#include <stdio.h>
void func1(int num);
int main()
{
    int num;
    scanf("%d", &num);
    func1(num);
    return 0;
}
void func1(int num)
{
    if (num < 0)
        printf("Negative");
    else if (num> 0)
        printf("Positive");
    else
        printf("Zero");
    return;
}