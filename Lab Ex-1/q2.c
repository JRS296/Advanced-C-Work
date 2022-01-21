#include <stdio.h>

int main()
{
    float KM, m, feet, inch, cm;
    printf("Enter distance between two cities in KM: ");
    scanf("%f", &KM);

    m = KM*1000;
    cm = m*100;
    inch = KM*39370.1;
    feet = inch/12;
    printf("\nMetres: %.2f",m);
    printf("\nCentietres: %.2f",cm);
    printf("\nInches: %.2f",inch);
    printf("\nFeet: %.2f",feet);
}