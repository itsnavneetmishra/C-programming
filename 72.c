#include<stdio.h>
int main()
{

    FILE *file;
    char topic[]="My name is Navneet Mishra \n ";

    file=fopen("Navneet.txt","w");

    if(file==NULL)
    {
        printf("ERROR!!");
    }
    
    fprintf(file,"%s",topic);

    fclose(file);

    printf("WELL DONE");
}