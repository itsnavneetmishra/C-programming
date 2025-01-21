#include<stdio.h>

int main()
{   
    char str1[7],str2[10];
    int i;
    printf("Enter name : ");
    scanf("%s",str1);

    while(str1[i] != '\0')
    str1[i]=str2[i];
    i++;
    
    printf("%s",str2);
    
    
    
} 