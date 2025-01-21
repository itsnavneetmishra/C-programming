#include<stdio.h>

#define PI 3.14159
#define AREA_of_circle(radius) (PI *(radius)*(radius))

int main()
{
    float radius=5;
    float area= AREA_of_circle(radius);
    printf("%f",area);
    return 0;



}