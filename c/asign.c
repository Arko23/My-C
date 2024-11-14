#include<stdio.h>

int main()
{
    int a,b;
    printf("number of Player 1 : ");
    scanf("%d",&a);

    printf("Player 2 guess the Player 1 number: ");
    scanf("%d",&b);

    if(a != b)
    {
        printf("wrong guess,2chances left\n again guess it : ");
        scanf("%d",&b);
                       if(a != b)
                      {
                           printf("wrong guess again,final chance left\n again guess it : ");
                           scanf("%d",&b);
                                          if(a != b)
                                          {
                                              printf("again wrong guess,you have lost\n Player 1 wins");
                                          }
                                          else
                                          {
                                              printf("right answer, Player 2 wins");
                                          }

                      }
                       else
                       {
                           printf("right answer,Player 2 wins");
                       }
   
    }
     else
     {
         printf("right answer,Player 2 wins");
     }
     return 0;
}