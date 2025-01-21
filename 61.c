#include <stdio.h>

void main()
{
    int a[5]={7,3,1,10,5},i;
    
    int small=a[0],pos=0;
    
    for(i=1; i<=4; i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
    }
    printf("%d",small);
    
    
}



