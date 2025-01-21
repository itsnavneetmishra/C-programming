#include <stdio.h>

void add();
void subt();
void multiplication();
void division();
void main()
{
    
    int ch;
    printf("operation you want to perform?\n");
    
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("%d",&ch);
    
    if(ch==1)
    {
        add();
        
    }
    if(ch==2)
    {
        subt();
        
    }
    if(ch==3)
    {
        multiplication();
        
    }
    if(ch==4)
    {
        division();
        
    }
    
}



void add()
{   int a,b;
    printf("Enter the values of n1=");
    scanf("%d",&a);
    printf("Enter the values of n2=");
    scanf("%d",&b);
    
    int sum = a+b;
    printf("sum of a and b= %d",sum);
}

void subt()
{   int a,b;
    printf("Enter the values of a=");
    scanf("%d",&a);
    printf("Enter the values of b=");
    scanf("%d",&b);
    
    int minus= a-b;
    printf("Subtraction of a and b =%d",minus);
}

void multiplication()

{   int a,b;
    printf("Enter the values of a=");
    scanf("%d",&a);
    printf("Enter the values of b=");
    scanf("%d",&b);
    
    int c= a*b;
    printf("Multipication on a nd b =%d",c);
}

void division()
{   int a,b;
    printf("Enter the values of a=");
    scanf("%d",&a);
    printf("Enter the values of b=");
    scanf("%d",&b);
    
    int d= a/b;
    printf("Division of a and b =%d",d);
    
}
