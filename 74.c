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
   // char ch[20];

   // fscanf(file,"%s",ch);
//printf("%s\n",ch);

char ch;
    while ((ch = fgetc(file)) != EOF) {
       // putchar(ch);  // Print each character to the screen
       printf("%c",ch);
    }


    fclose(file);


    printf(" End");
    return 0;

}