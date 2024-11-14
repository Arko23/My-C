#include <stdio.h>

int main()
{
    int ara[100];
    int n, i;

    printf("size= ");
    scanf("%d", &n);
    printf("Enter araay: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("araay is : ");
    Printaraay(ara, 0, n);

    return 0;
}

void Printaraay(int ara[], int start, int len)
{

    if (start >= len)
        return;

    printf("%d ", ara[start]);

    Printaraay(ara, start + 1, len);
}