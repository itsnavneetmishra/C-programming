#include<stdio.h>
#include<string.h>

void main() 
{
    int count=0;
    char a[10];
    printf("Write :");
    scanf("%s",a);

    while (a[count] != '\0')
    {
        
        count++;
        
    }
    printf("%d",count);
}