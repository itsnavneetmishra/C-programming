#include <stdio.h>

void main()
{
    int a[100], i,n;
    printf("How many numbers you want to enter : ");
    scanf("%d",&n);
    {
       for(i=0; i<n; i++) 
       {
           printf("Enter numers : ");
           scanf("%d",&a[i]);
       }
    }
    
    
    
    int count=0;
    for(i=0; i<=5; i++)
    {
        if(a[i]%2==0)
        {
            count=count+a[i];
        }
    }
    printf("The sum of even numbers = %d",count);
    
    
}