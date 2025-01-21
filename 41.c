#include<stdio.h>

void main()
{
    int i, j, t, f;
    int a[5]={7,3,8,4,5};
    
    for(j=0; j<=4;i++)
    {
        for (i=0; i=4-j; i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=f;
            }
            
        }
    }
    
    printf("%d",a[0]);
    
}