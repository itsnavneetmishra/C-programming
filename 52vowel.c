#include<stdio.h>
#include<string.h>

void main() 
{
    char a[100];
    printf("Enter the string : ");
    scanf("%s",a);
    printf("Inputted string : %s\n",a);
    
    int i=0,count=0;
    
    while( a[i] != '\0' )
    {
        if( a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
        {
            count++;
        }
        i++;
    }
    printf("%d",count); 
    
    
    
    
    
}