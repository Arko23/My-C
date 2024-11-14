#include<stdio.h>
int main()
{
    float deg,radian, radP=1, sinX, x1=0, x2=0;
    unsigned long long fact=1;
    double pI = 3.141592654;
    int i,j,power=1, inv = -1;

    scanf("%f", &deg);

    if (deg >= 0 && deg <= 90)
    {
        radian = deg * (pI / 180);




        for (i=1;; i+=2)
        {
            x1 = sinX;
            if (i==1)
            {
                sinX = radian;
            }
            else
            {
                 fact = fact  * i  * (i-1);
                power += 2;
                for (j=1; j<=power; j++)
                {
                    radP *= radian;
                }

                sinX += inv *  (radP / fact);
                radP = 1;
                inv *= -1;





            }


            x2 =sinX;


            if (x1 == x2)
            {

                break;
            }


        }

       printf("%f \n", sinX);


    }







    return 0;
}