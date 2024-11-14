#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    
    char ch[100];
    gets(ch);
    int i,j,k;
    int len=strlen(ch);
   // printf("%d",len);
    for(i=0;i<len;i++)
    {};
    //printf("%d",i);
        for(j=len;ch[j]!=' ';j--)
        {};
           for(k=j;k<len;k++)
           {
            printf("%c",ch[k]);
           }
        
    
}