#include<stdio.h>

int main()
{
    FILE *file;

    file=fopen("FILE1.txt","r");

    if(file==NULL)
    {
        printf("COULD NOT BE OPENED!!");
        return 1;

    }
 
    char ch;
    while((ch=fgetc(file)) != EOF)
    {
        printf("%c",ch);
    }


}