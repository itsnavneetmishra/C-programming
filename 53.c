#include<stdio.h>
#include<string.h>

void main() 
{
    char a[100];
    printf("Enter the string : ");
    scanf("%s",a);
    printf("Inputted string : %s\n",a);
    
    int i,count=0;
    
    for(i=0; a[i] != '\0'; i++ )
    {
        if( a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
        {
            count++;
        }
        
    }
    printf("Number of vowels in the string = %d",count); 
    
    
    
    
    
}