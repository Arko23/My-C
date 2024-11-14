#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch[100];
    gets(ch);
    int i, j;
    int count = 0;
    for (i = 0; i < strlen(ch); i++)
    {
        count = 0;
        for (j = i + 1; j < strlen(ch); j++)
        {
            if (ch[i] == ch[j])
            {
                count++;
                ch[j] = '0';
            }
        }
        if (count > 0 && ch[i] != '0')
        {
            printf("\n%c %d", ch[i], count+1);
        }
    }
    printf("\n%s", ch);
}