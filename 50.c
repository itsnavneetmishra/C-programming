#include<stdio.h>
#include<string.h>

void main() 
{

    char a[100];
    printf("Enter the string : ");
    scanf("%s",a);
    
    
    int i=0;
    for (i = 0;  a[i] !='\0' ; i++);
  
    printf("Length of the string: %d", i);
}




    
