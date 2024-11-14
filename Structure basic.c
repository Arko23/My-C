#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[100];
};
int main()
{
    struct student s;

    scanf("%d", &s.id);
    getchar(); // for consuming the "ENTER";

    char str[100];
    fgets(str, sizeof(str), stdin);
    strcpy(s.name, str);
    // how to take string input in struct;

    printf("ID>>  %d\n", s.id);
    printf("Name>>  %s\n", s.name);

    return 0;
}