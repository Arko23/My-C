#include<stdio.h>
int main()
{
    FILE* file;
    float f, sum=0;
    file=fopen("file.txt","r");
    
    while(!feof(file))
{
    fscanf(file,"%f",&f);
    sum+=f;
}
printf("%f",sum);
fclose(file); 


     
}