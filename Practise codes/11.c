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
        //count = 0;
        for (j = i + 1; j < strlen(ch); j++)
        {
            if (ch[i] == ch[j])
            {
                for(int k=j;k<strlen(ch);k++)
                {
                    ch[k]=ch[k+1];
                }
                
            }
        }

    }
    printf("%s",ch);
}