#include<stdio.h>

void main()
{
    int a,b,c,ch;
    printf("Enter the numbers");
    scanf("%d%d", &a,&b);
    printf("1.add \n");
    printf("2.sub \n");
    printf("3.mul \n");
    printf("4.div \n");
    
    printf("Enter the operation");
    scanf("%d",&ch);
    
    
    switch(ch)
    {
        case 1:
            c=a+b;
            printf(" a+b= %d",c);
            break;
        
        case 2:
            c=a-b;
            printf("a-b= %d",c);
            break;
        
        case 3:
            c=a*b;
            printf("a*b= %d",c);
            break;
        
        case 4:
            c=a/b;
            printf("a/b= %d",c);
            break;
        
        default:
            printf("Wrong Choice");
        
        
        
    }
    
    
    
    
}
