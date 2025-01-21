#include<stdio.h>

void main()
{
    int n,i,rem=0;
    printf("Write number of you choice : ");
    scanf("%d",&n);
    for(i=0; i<=5; i++)
    {
        
        rem=rem+n%10;
        n=n/10;
    }
    
    printf("%d",rem);
     
}