

#include <stdio.h>
void main() 
{
    int n;
    printf("How many values you want to Enter =");
    scanf("%d",&n);
    
    int a[n],i;
    
    for(i=0 ; i<n ;i++)
    {
        printf("Enter value");
        scanf("%d",&a[i]);
        
    }
    
    printf("Your output is =\n");
    
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }

}