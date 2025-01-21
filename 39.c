 // Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[5]={7,3,10,8,9};
    int i,c=0,sum;
    for (i=0;i<=4;i++)
    {   c=a[i];
        printf("%d\n",c);
        sum+=c;
        
        printf("%d",sum);
    }

}