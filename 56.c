#include<stdio.h>

void main()
{
    int a[5],i;
    
    printf("Enter five numbers : ");
    
    for (i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<=4; i++)
    {
        printf("The numbers you entered are : %d\n",a[i]);
    }
    
}