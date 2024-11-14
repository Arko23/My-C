#include <stdio.h>
void func(char str[]);
int main()
{
    char str[100];
    printf("Enter string :\n");
    fgets(str, sizeof(str), stdin);

    func(str);
    return 0;
}
void func(char str[])
{
    char x;
    int count = 0, flag = 0;
    scanf("%c", &x);
    for (int i = 0; str[i] != NULL; i++)
    {
        if (x == str[i])
        {
            count++;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Number of %c = ", x);
        printf("%d", count);
    }
    else
    {
        printf("Not in the string.");
    }
}
