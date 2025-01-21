// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[]={7,3,10,6,5};
    int n,i,c=0;
    printf("Enter which value you want to search for ? ");
    scanf("%d",&n);
    
    
    for (i=0; i<5;i++)
    {
        if(a[i]==n)
        {
            printf("Number found");
            c++;
            break;
        }
        if(c==0)
        {
            printf("Not found!");
        }
    }
}