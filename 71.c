#include<stdio.h>

int main()
{

    FILE *file;
 
    file=fopen("Navneet.txt","r");

    if(file==NULL)
    {
        printf("Error!!");
        return 1;
    }
    char ch;
    while((ch=fgetc(file) != EOF))
    {
        putchar(ch);
    }
    
    fclose(file);
    return 0;




}