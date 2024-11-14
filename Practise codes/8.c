#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    char str[100];

    gets(ch);
    gets(str);

    strcat(ch,str);
    printf("%s\n",ch);
}