#include<stdio.h>

void main()
{
    int a[100][100],b[100][100],i,j,r,c;
    
    printf("Enter number of rows : ");
    scanf("%d",&r);
    
    printf("Enter number of columns : ");
    scanf("%d",&c);
    
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter element %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix = \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d",a[i][j]);
            
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    }
    
}