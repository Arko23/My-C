#include <stdio.h>
int main()
{
    char str[1000], strr[1000];
    printf("Enter string :\n");
    gets(str);
    int k = 0;
    for (int i = 0; str[i] != NULL; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            strr[k] = str[i];
            k++;
        }
    }
    strr[k] = NULL;
    puts(strr);
}