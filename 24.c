// Swapping two numbers
#include <stdio.h>
void swap(int *,int *);
void main()
{
    
    int a=3,b=4;
    
    printf("%d%d",a,b);
    swap(&a , &b);
    
    printf("%d%d",a,b);

}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}