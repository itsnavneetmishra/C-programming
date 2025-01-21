#include <stdio.h>

void main()
{
    int a[5]={3,7,8,6,5}, i;
    int count=0;
    for(i=0; i<=5; i++)
    {
        if(i % 2 != 0)
        {
            count=count+1;
        }
    }
    printf("The sum of numbers at odd positions = %d",count);
    
    
} 