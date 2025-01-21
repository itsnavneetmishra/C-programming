#include<stdio.h>

int main()
{
    FILE *fp;

    char content[]="Hello how are you.\nPlease call back me when you are free.";

    fp=fopen("FILE1.txt","w");
    if(fp==NULL)
    {
        printf("File could not be opened !!");
        return 1;
    }    

    fprintf(fp,"%s",content);


    fclose(fp);

    

    printf("WRITTEN!!");


    return 0;




}   