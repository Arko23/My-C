#include <stdio.h>

void find_substr(char *a, char *b)
{
    int i = 0;
    int j, k, len1=0, len2, n1,n2, flag = 0;
    for (i = 1; a[i] != '\0'; ++i)
    {
        ++len1;
    }
    len2 = 0;
    for (i = 1; b[i] != '\0'; ++i)
    {
        ++len2;
    }
    puts(a);
    puts(b);
    printf("x = %d\n", len1);
    printf("x = %d\n", len2);
    n1 = 0;
   n2 = len2;
    for (i = 0; i < (len1 - len2) + 1; ++i)
    {
        k = 0;

        for (j = n1; j <n2; ++j)
        {
            if (b[k] == a[j])
            {
                flag++;
            }
            if (k != len2)
            {
                ++k;
            }
            else
            {
                k = 0;
            }
        }
        n1 = n1 + 1;
       n2++;
        if (flag == len2)
        {
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if (flag == len2)
    {
        printf("\n\n1");
    }
    else
    {
        printf("\n\n0");
    }
}

int main()
{
    char x[100], y[100];
    fgets(x, sizeof(x), stdin);
    fgets(y, sizeof(y), stdin);
    find_substr(x, y);

    return 0;
}