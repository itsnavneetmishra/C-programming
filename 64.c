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
    
    printf("Enter name : ");
    scanf("%s",&b1.name);
    
    printf("Enter price : ");
    scanf("%f",&b1.price);
    
    printf("Enter pages : ");
    scanf("%d",&b1.pages);
    
    
    int i;
    for(i=0;i<=32;i++)
    {
    printf("==");
    }
    
    
    
    printf("\nName = %s\n",b1.name);
    printf("Price = %f\n",b1.price);
    printf("Pages = %d\n",b1.pages);
}