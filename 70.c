#include<stdio.h>

int main()
{

    FILE *file;
 
    char content[]="My Name is Navneet Mishra \n currently I am pursuing btech in ECE Branch.";


    file=fopen("sample1.txt","w");

    if(file==NULL)
    {
        printf("Error!!");
        return 1;
    }

    fprintf(file,"%s",content);

    fclose(file);

    printf("well done");
    return 0;
}