#include <stdio.h>
void c_len(char x[]);
int main()
{
    char ch[100];
    gets(ch);
    c_len(ch);
    return 0;
}
void c_len(char x[])
{
    int count = 0;
    for (int i = 0; x[i] !='\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);
}