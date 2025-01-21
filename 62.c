#include <stdio.h>

void main()
{
    int n,i;
    
    printf("which table do you want ? ");
    scanf("%d",&n);
    
    for(i=1; i<=10; i++)
    {
        int a=n*i;
        printf("%d * %d = %d\n",n , i , a);
    }
    
}
