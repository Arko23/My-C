#include <stdio.h>
void func1(char ch);
int main()
{
    char a;
    scanf("%c", &a);
    func1(a);
    return 0;
}
void func1(char ch)
{
    printf("Value recieved from main is %c\n", ch);
    return;
}