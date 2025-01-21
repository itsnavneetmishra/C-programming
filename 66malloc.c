#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *a , i , n;
    
    printf("Enter size of array : ");
    scanf("%d",&n);
    

    //malloc
    a=(int*)malloc(n*sizeof(int));
    printf("Enter data in array");
    


    //input
    for(i=0; i<n; i++)
    {
        scanf("%d",(a+i));
    }
    
    printf("Output is ");
    

    //printing
    for(i=0; i<n; i++)
    {
        printf("%d",*(a+i));
    }
    
    
}