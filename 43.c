#include<stdio.h>
void main(){
    
    int i,j,a[2][3];
    
    for (j=0; j<=1; j++)
    {
        for (i=0; i<=2; i++)
        {
            scanf("%d",&a[j][i]);
        }
    }
    
    for (j=0; j<=1; j++)
    {
        for (i=0; i<=2,i++)
        {
            printf("%d",a[j][i]);
        }
    }
    
}