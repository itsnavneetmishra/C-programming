#include <stdio.h>


void main()
{
   
    int ch;
    printf("operation you want to perform?\n");
    
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    scanf("%d",&ch);


    int a,b,sum,subtt,mult,divv;
    printf("Enter value of a=");
    scanf("%d",&a);
    printf("Enter value of b=");
    scanf("%d",&b);
    
    
    if(ch==1)
    {
        sum=add(a,b);
        printf("sum of a and b=%d\n",sum);
    }
    
    else if(ch==2)
    {
        subtt=subt(a,b);
        printf("subtraction of a and b=%d\n",subtt);
    }
    
    else if(ch==3)
    {
        mult=multiplication(a,b);
        printf("multiplication of a and b =%d\n",mult);
    }
    else if(ch==4)
    {
        divv=division(a,b);
        printf("Division of a and b =%d\n",divv);
    }
    
}

int add(int x, int y)
{
    int c=x+y;
    return c;
    
}

int subt(int x, int y)
{
    int c=x-y;
    return c;
}

int multiplication(int x, int y)
{
    int c=x*y;
    return c;
}

int division(int x,int y)
{
    int c=x/y;
    return c;
}