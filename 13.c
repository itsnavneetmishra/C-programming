#include<stdio.h>

void main()
{
    int n;
    printf("Enter value of n ");
    scanf("%d", &n);
    if(n>0)
    {
        printf("n is a Positive number ");
        
    }
    else if(n<0)
    {
        printf("n is a Negative number");
        
    }
    else
    {
        printf("n is equals to zero");
    }
    
}
