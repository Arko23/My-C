#include <stdio.h>
#include <string.h>

int find_substr(char a[], char b[])
{
    char *ptr = strstr(a, b);
    if (ptr != '\0')
        return 1;

    else
        return 0;
}
int main()
{
    char ch[100];
    gets(ch);
    char find[100];
    gets(find);
    int x = find_substr(ch, find);
    printf("%d\n", x);

    return 0;
}