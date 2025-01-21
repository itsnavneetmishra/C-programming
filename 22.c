#include <stdio.h>

int add(int,int);
void main()
{
    int a,b,sum;
    printf("Enter value of a=");
    scanf("%d",&a);
    printf("Enter value of b=");
    scanf("%d",&b);
    
    sum = add(a,b);
    printf("Addition of a and b=%d",sum);
    
    
    
}


int add(int x, int y)
{
    int c=x+y;
    return c;
    
}


