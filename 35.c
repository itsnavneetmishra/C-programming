
#include <stdio.h>
void main() 
{
    int a[5]={20,10,15,35,23};
    int i;
    for(i=0; i<=4; i++)
    {
    
        printf("%d\n",*(a+i));
        printf("%d\n",(a+i));
    }
    
}