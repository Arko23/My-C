#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person
{
    char name[30];
    int age;
    float sallary;
};

void info(struct person x[], int a)
{
    int i;
    for (i = 0; i < a; i++)
    {
        printf("%s\n", x[i].name);
        printf("%d\n", x[i].age);
        printf("%f\n", x[i].sallary);
    }
}
int main()
{
    struct person p[8];
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        gets(p[i].name);
        scanf("%d", &p[i].age);
        scanf("%f", &p[i].sallary);
    }

    info(p, n);
}