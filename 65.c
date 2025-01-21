#include<stdio.h>

void main()
{
    struct book
    {
        char name[20];
        
        float price;
        
        int pages;
    };
    struct book b1;
    
    printf("Write details");
    scanf("%s",&b1.name);
    scanf("%f",&b1.price);
    scanf("%d",&b1.pages);
  
   
    printf("Name = %s\n",b1.name);
    printf("Price = %f\n",b1.price);
    printf("Pages = %d\n",b1.pages);
}