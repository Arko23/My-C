
/* Write a program that takes the gold medal count, silver medal count,
bronze medal count for all 163 countries in an Olympic game as input from user.
Find the country that captures the max medals among all countries.*/

#include <stdio.h>
int main()
{
    int ara[5][3], sum, summation[5];
    for (int i = 0; i < 5; i++)
    {
        sum = 0;
        printf("Country %d >>>>\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
                printf("GOld :: ");
            else if (j == 1)
                printf("Silver :: ");
            else
                printf("BRONZE :: ");
            scanf("%d", &ara[i][j]);
            sum += ara[i][j];
        }
        printf("\n");
        summation[i] = sum;
    }
    int max, flag = 0;
    max = summation[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < summation[i])
        {
            max = summation[i];
            flag = 1;
        }
        else if (max > summation[i])
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("There is no highest medals winner country.\n");
    }
    else
    {
        int max_ind[5], k = 0;
        for (int i = 0; i < 5; i++)
        {
            if (summation[i] == max)
            {
                max_ind[k++] = i + 1;
            }
        }
        printf("The highest medals holder countries are : \n");
        for (int i = 0; i < k; i++)
        {
            printf("%d  ", max_ind[i]);
        }
    }
}
