#include <stdio.h>
#include <math.h>
void takeinput();
float caclmean(int *ara, int x);
void calc_std_deviation(int *ara, int a, float b);
int main()
{
    takeinput();
    return 0;
}
void takeinput()
{
    int put_n;
    printf("Enter the size of array:\n");
    scanf("%d", &put_n);
    int ara[put_n];
    printf("Enter the elements :\n");
    for (int i = 0; i < put_n; i++)
    {
        scanf("%d", &ara[i]);
    }
    float s;
    s= caclmean(ara, put_n);
    calc_std_deviation(ara, put_n, s);
    return;
}
float caclmean(int *ara, int x)
{
    float sum = 0.0;
    for (int i = 0; i < x; i++)
    {
        sum += ara[i];
    }
    float s = 0;
    s = sum / x;
    return s;
}
void calc_std_deviation(int *ara, int a, float b)
{
    float sum = 0.0;
    for (int i = 0; i < a; i++)
    {
        sum += pow((ara[i] - b), 2);
    }
    float var;
    var = sum / a;
    printf("The deviation is = %0.3f", sqrt(var));
    return;
}
