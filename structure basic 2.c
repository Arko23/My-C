#include <stdio.h>
#include <string.h>
struct nametype
{
    char first[100];
    char last[100];
};
struct student
{
    int id;
    struct nametype name;
};
int main()
{
    struct student one;

    scanf("%d", &one.id);

    getchar(); // to get the "ENTER".
    char str[100];
    fgets(str, sizeof(str), stdin);
    strcpy(one.name.first, str);
    // getchar();
    fgets(str, sizeof(str), stdin);
    strcpy(one.name.last, str);

    printf("\nDetails :\n\n");
    printf("ID ::  %d\n", one.id);
    printf("First name ::  %s", one.name.first);
    printf("First name ::  %s", one.name.last);

    return 0;
}
