#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter value of a %d");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b)
    {
        if(a>c)
        printf("A is big %d");
    }
    else
    {
        printf("C is big %d");
    }
    if(b>c)
    {
        printf("b is big %d");
        
    }
    else
    {
        printf("c is big %d");
    }
    
}
