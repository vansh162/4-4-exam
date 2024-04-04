#include <stdio.h>

int main()
{
    
    float a; 
    float b;
    float c;
    float x;
   
    printf("Find Third angle of triangle\n");
    printf("Enter the One side of triangle:");
    scanf("%f",&a);
    printf("Enter the Second side of triangle:");
    scanf("%f",&b);
    printf("The Third side of triangle is:");
    x=a+b;
    c=180-x;
    printf("%.2f",c);
    return 0;
}