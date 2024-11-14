// the code will run like this : 1!/1 + 2!/2 + 3!/3 + 4!/4 +...

#include <stdio.h>
float func(int n, int m);
unsigned long long int fact(int n);
int main()
{
    int n, m;
    printf("enter the range :\n");
    scanf("%d %d", &n, &m);

    printf("The sum of the range is %0.3f", func(n, m));
    return 0;
}
float func(int n, int m)
{
    float sum = 0.0;
    for (int i = n; i <= m; i++)
    {
        sum += (fact(i) / (float)i);
    }
    return sum;
}
unsigned long long int fact(int n)
{
    unsigned long long int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
