#include<stdio.h>

int main()
{
    FILE *file;
    char content[]="My name is Navneet Mishra.\nCurrentlt I am pursuing Btech.";
    
    
    file=fopen("Navneet.txt","w");
    
    if(file==NULL)
    {
        printf("Error!!\n");
        return 1;
    }
    

    
    fprintf(file,"%s",content );
    
    
    fclose(file);
    
    printf("DONE!!");
    
    return 0;
    
}