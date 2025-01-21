#include<stdio.h>
#include<string.h>

void main() 
{
    int b;
    char a[10];
    printf("Write :");
    scanf("%s",a);
    printf("Your string = %s\n",a);
    
    b=strlen(a);
    printf("Length of string = %d",b);

}
