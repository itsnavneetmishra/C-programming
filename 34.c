
#include <stdio.h>
void main() 
{
    int a[5]={20,10,15,35,23};
    
    int x=0,i;
    
    for(i=0 ;i<5 ; i++)
    {
        if (x<a[i])
        x=a[i];
    }
    printf("%d",x);
    
    
}