#include<stdio.h>

int main()
{
    float fahr, cels;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&fahr);
    cels = ((fahr-32)*(5))/9;
    printf("Temperature in Celscius: %.2f",cels);
}