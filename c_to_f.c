#include <stdio.h>

int main()
{
    float c;
    float f; 
    float ans;
    printf("Convert Celcius into Fahrenheit:\n");
    printf("Enter the temperature in Celcius:\n");
    scanf("%f",&c);
    printf("Temperature in Fahrenheit is:");
    f=c*1.8;
    ans=f+32;
    printf("%.2f",ans);
    return 0;
}