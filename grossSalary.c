#include <stdio.h>

int main()
{
    float s;
    float gs;
    float hra; 
    float da;
    float ta;
    float a; 
    float b;
    float c;
    float aa; 
    float bb;
    float cc;
    printf("Find Gross Salary\n");
    printf("Enter the Salary:");
    scanf("%f",&s);
    printf("Enter HRA in percentage:");
    scanf("%f",&hra);
    printf("Enter DA in percentage:");
    scanf("%f",&da);
    printf("Enter TA in percentage:");
    scanf("%f",&ta);
    a=hra/100;
    aa=a*s;
    b=da/100;
    bb=b*s;
    c=ta/100;
    cc=c*s;
    gs=s+aa+bb+cc;
    printf("%.2f",gs);
    return 0;
}