#include<stdio.h>
int fact(int x);
void main()
{
    int n,f;
    
    printf("Enter value of n =");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of n =",f);
}

int fact(int x)
{
    if(x==0)
    return (1);
    
    else
    return (x*fact(x-1));
    
}
    
    
    