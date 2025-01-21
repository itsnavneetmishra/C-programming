#include<stdio.h>
#include<string.h>

void main() 
{
    char a[100];
    printf("Enter string a : ");
    scanf("%s",a);
    
    char b[100];
    printf("Enter string b : ");
    scanf("%s",b);
    
    int i=0,c,d;
    for (i = 0;  a[i] !='\0' ; i++);
    c=i;
    printf("Length of string a : %d\n", i);
    
    int j=0;
    for(j=0; b[j] !='\0'; j++);
    d=j;
    printf("Length of string b : %d\n",j);
    
    
    if(c==d)
    {
        printf("They are of same length \n");
    }
    else
    {
        printf("No! They are not of same length \n");
    }
}




    
